#include <iostream>
#include <string>   // para std::string

using namespace std;

int main() {
    string nome;
    int idade;

    // Lê a idade com cin (entrada simples, sem espaços)
    cout << "Digite sua idade: ";
    cin >> idade;  // usa cin >> para ler um inteiro[web:21][web:24]

    // Limpa o '\n' que ficou no buffer antes de usar getline
    cin.ignore(1000, '\n');  // evita que getline seja "pulado"[web:22][web:27]

    // Lê o nome completo com getline (aceita espaços)
    cout << "Digite seu nome completo: ";
    getline(cin, nome);      // lê toda a linha, inclusive espaços[web:17][web:18][web:29]

    // Saída organizada
    cout << "\n=== Dados do usuário ===" << endl;
    cout << "Nome : " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;

    return 0;
}
