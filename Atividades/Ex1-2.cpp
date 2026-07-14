#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;

    getline(cin, nome);   // lê o nome completo (com espaços)[web:18][web:29]
    cin >> idade;         // lê a idade como inteiro[web:31]

    cout << nome << endl;
    cout << idade << endl;

    return 0;
}
