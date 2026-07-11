#include <iostream>
#include <string>

using namespace std;

// Struct para armazenar os dados de um produto
struct Produto {
    string nome;   // Nome do produto
    int qtd;       // Quantidade em estoque
    float preco;   // Preço do produto
};

int main() {

    // Vetor com 5 posições para armazenar 5 produtos
    Produto produtos[5];

    for(int i = 0; i < 5; i++){
        cout << "Produto " << i+1 << endl;  // Mostra qual produto está sendo cadastrado

        cout << "Nome: ";
        cin >> produtos[i].nome;            // Lê o nome do produto

        cout << "Quantidade: ";
        cin >> produtos[i].qtd;             // Lê a quantidade em estoque

        cout << "Preco: ";
        cin >> produtos[i].preco;           // Lê o preço do produto

        cout << endl;                       // Linha em branco para organizar a saída
    }

    // Variáveis usadas para realizar a venda
    string nomeBusca;   // Guarda o nome do produto que o usuário quer vender
    int qtdVenda;       // Guarda a quantidade que o usuário quer vender

    cout << "Digite o nome do produto para vender: ";
    cin >> nomeBusca;   // Lê o nome do produto procurado

    cout << "Quantidade para vender: ";
    cin >> qtdVenda;    // Lê a quantidade desejada para venda

    // Variável de controle para saber se o produto foi encontrado
    bool encontrado = false;
    for(int i = 0; i < 5; i++){

        // Verifica se o nome digitado é igual ao nome do produto atual
        if(produtos[i].nome == nomeBusca){
            encontrado = true;  // Marca que o produto foi encontrado

            // Verifica se há quantidade suficiente em estoque
            if(produtos[i].qtd >= qtdVenda){
                produtos[i].qtd -= qtdVenda;   // Atualiza o estoque, subtraindo a venda
                cout << "Venda realizada com sucesso!\n";
            } else {
                // Caso não tenha estoque suficiente
                cout << "Estoque insuficiente.\n";
            }
        }
    }

    // Se nenhum produto com esse nome foi encontrado
    if(!encontrado){
        cout << "Produto nao encontrado.\n";
    }
    cout << "\n--- Estoque Atual ---\n";

    for(int i = 0; i < 5; i++){
        cout << produtos[i].nome         // Mostra o nome do produto
             << " - Qtd: "
             << produtos[i].qtd          // Mostra a quantidade atual
             << " - Preco: "
             << produtos[i].preco        // Mostra o preço do produto
             << endl;
    }

    return 0;  // Indica que o programa terminou corretamente
}