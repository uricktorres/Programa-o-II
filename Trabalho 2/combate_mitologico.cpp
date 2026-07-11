#include <iostream>
#include <string>
using namespace std;

// Classe base abstrata
class Personagem {
protected:
    string nome;
    int hp;
    int ataque;
    int defesa;

public:
    Personagem(const string& n, int vida, int atk, int def)
        : nome(n), hp(vida), ataque(atk), defesa(def) {}

    virtual ~Personagem() = default;

    const string& getNome() const { return nome; }
    int getHP() const { return hp; }

    void setHP(int vida) {
        if (vida < 0) vida = 0;
        hp = vida;
    }

    bool estaVivo() const { return hp > 0; }

    // Método de ataque: retorna dano bruto
    virtual int executarGolpe(int tipoGolpe) = 0;

    // Receber dano: considera defesa e nunca deixa HP negativo
    virtual void receberDano(int danoBruto) {
        int danoLiquido = danoBruto - defesa;
        if (danoLiquido < 0) danoLiquido = 0;
        hp -= danoLiquido;
        if (hp < 0) hp = 0;
        cout << nome << " recebe " << danoLiquido
             << " de dano (HP agora = " << hp << ").\n";
    }
};

// Classes derivadas

class Guerreiro : public Personagem {
public:
    Guerreiro(const string& n)
        : Personagem(n, 120, 25, 10) {}

    int executarGolpe(int tipoGolpe) override {
        switch (tipoGolpe) {
        case 1:
            cout << nome << " avanca com furia em um golpe de espada mitico!" << endl;
            return ataque;
        case 2:
            cout << nome << " desencadeia um ataque devastador digno dos campos de guerra olimpicos!" << endl;
            return ataque * 2;
        default:
            cout << nome << " erra o ataque." << endl;
            return 0;
        }
    }
};

class Mago : public Personagem {
public:
    Mago(const string& n)
        : Personagem(n, 80, 30, 5) {}

    int executarGolpe(int tipoGolpe) override {
        switch (tipoGolpe) {
        case 1:
            cout << nome << " conjura uma magia ancestral contra o inimigo!" << endl;
            return ataque;
        case 2:
            cout << nome << " invoca poderes divinos, liberando energia arcana sobre o adversario!" << endl;
            return ataque * 3;
        default:
            cout << nome << " falha ao canalizar o poder." << endl;
            return 0;
        }
    }
};

class Arqueiro : public Personagem {
public:
    Arqueiro(const string& n)
        : Personagem(n, 100, 20, 8) {}

    int executarGolpe(int tipoGolpe) override {
        switch (tipoGolpe) {
        case 1:
            cout << nome << " dispara uma flecha precisa que corta o ar como um sussurro dos deuses!" << endl;
            return ataque;
        case 2:
            cout << nome << " libera uma chuva de flechas, evocando a furia divina da caca!" << endl;
            return ataque * 2;
        default:
            cout << nome << " erra o disparo." << endl;
            return 0;
        }
    }
};

// Funções auxiliares

void listarPersonagens(Personagem* personagens[], int total) {
    cout << "\n=== Deuses Disponiveis ===\n";
    for (int i = 0; i < total; ++i) {
        cout << i << " - " << personagens[i]->getNome()
             << " (HP: " << personagens[i]->getHP() << ")\n";
    }
    cout << "==========================\n";
}

int escolherIndice(int maxIndice) {
    int escolha;
    do {
        cout << "Digite o numero do personagem: ";
        cin >> escolha;
    } while (escolha < 0 || escolha >= maxIndice);
    return escolha;
}

int menuGolpes() {
    int opcao;
    cout << "\nEscolha seu golpe:\n";
    cout << "1 - Golpe normal\n";
    cout << "2 - Golpe especial\n";
    cout << "Opcao: ";
    cin >> opcao;
    if (opcao != 1 && opcao != 2) opcao = 1;
    return opcao;
}

// Função main

int main() {
    const int MAX_PERSONAGENS = 10;
    Personagem* personagens[MAX_PERSONAGENS];
    int total = 0;

    // Pré-registro: 10 deuses/figuras da mitologia, com classes coerentes
    
    personagens[total++] = new Guerreiro("Ares");          // deus da guerra
    personagens[total++] = new Guerreiro("Atena");         // deusa da guerra estrategica
    personagens[total++] = new Mago("Hades");              // deus do submundo, poderes sombrios
    personagens[total++] = new Mago("Hermes");             // mensageiro rapido, feitiços e truques
    personagens[total++] = new Arqueiro("Artemis");        // deusa da caca e do arco e flecha
    personagens[total++] = new Arqueiro("Eros");           // flechas que atingem coracoes
    personagens[total++] = new Guerreiro("Zeus");          // golpes como raios e trovoes
    personagens[total++] = new Mago("Apolo");              // poderes solares e musicais
    personagens[total++] = new Arqueiro("Apolo Arqueiro");// variante focada em arco
    personagens[total++] = new Guerreiro("Heracles");      // heroi de força descomunal

    cout << "=== Simulacao de Combate Mitologico ===\n";

    // Escolha do lutador do usuario
    listarPersonagens(personagens, total);
    cout << "\nEscolha seu deus-lutador:\n";
    int idxJogador = escolherIndice(total);

    // Escolha do oponente (diferente do jogador)
    cout << "\nEscolha o oponente (diferente do seu):\n";
    int idxOponente;
    do {
        idxOponente = escolherIndice(total);
    } while (idxOponente == idxJogador);

    Personagem* jogador = personagens[idxJogador];
    Personagem* oponente = personagens[idxOponente];

    cout << "\nVoce escolheu: " << jogador->getNome() << endl;
    cout << "Oponente: " << oponente->getNome() << endl;

    // Loop de combate em turnos
    while (jogador->estaVivo() && oponente->estaVivo()) {
        cout << "\n--- Novo Turno ---\n";
        cout << "HP Jogador: " << jogador->getHP()
             << " | HP Oponente: " << oponente->getHP() << "\n";

        // Turno do jogador
        int tipoGolpeJogador = menuGolpes();
        int danoJogador = jogador->executarGolpe(tipoGolpeJogador);
        oponente->receberDano(danoJogador);

        if (!oponente->estaVivo()) {
            cout << "\n" << oponente->getNome() << " foi derrotado!\n";
            cout << "Voce venceu o combate!\n";
            break;
        }

        // Turno do oponente (sempre golpe normal)
        cout << "\nTurno do oponente...\n";
        int tipoGolpeOponente = 1;
        int danoOponente = oponente->executarGolpe(tipoGolpeOponente);
        jogador->receberDano(danoOponente);

        if (!jogador->estaVivo()) {
            cout << "\n" << jogador->getNome() << " foi derrotado!\n";
            cout << "O sistema venceu o combate!\n";
            break;
        }
    }

    // Liberar memoria dos personagens
    for (int i = 0; i < total; ++i) {
        delete personagens[i];
    }

    cout << "\nFim da simulacao.\n";
    return 0;
}