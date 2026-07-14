#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;

    getline(cin, nome);   // lê o nome completo 
    cin >> idade;         // lê a idade como inteiro

    cout << nome << endl;
    cout << idade << endl;

    return 0;
}
