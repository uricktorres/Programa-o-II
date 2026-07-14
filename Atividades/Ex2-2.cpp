#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;   // nome completo (texto)
    int idade;     // idade (inteiro)
    double altura; // altura (real)

    cout << "Digite o nome completo: ";
    getline(cin, nome);

    cout << "Digite a idade: ";
    cin >> idade;

    cout << "Digite a altura: ";
    cin >> altura;

    cout << "\n=== Dados da pessoa ===\n";
    cout << "Nome  : " << nome << endl;
    cout << "Idade : " << idade << " anos" << endl;
    cout << "Altura: " << altura << " m" << endl;

    return 0;
}
