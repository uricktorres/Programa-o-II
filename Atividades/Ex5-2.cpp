#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;
    double nota1, nota2, nota3, media;

    cout << "Digite o nome completo: ";
    getline(cin, nome);

    cout << "Digite a idade: ";
    cin >> idade;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    cout << "Digite a terceira nota: ";
    cin >> nota3;

    media = (nota1 + nota2 + nota3) / 3.0;

    cout << fixed << setprecision(2);
    cout << "\n=== Dados do aluno ===" << endl;
    cout << "Nome  : " << nome << endl;
    cout << "Idade : " << idade << endl;
    cout << "Nota 1: " << nota1 << endl;
    cout << "Nota 2: " << nota2 << endl;
    cout << "Nota 3: " << nota3 << endl;
    cout << "Media : " << media << endl;

    return 0;
}
