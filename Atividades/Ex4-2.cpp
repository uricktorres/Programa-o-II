#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nome;
    double salario;

    cout << "Digite o nome: ";
    getline(cin, nome);

    cout << "Digite o salario: ";
    cin >> salario;

    cout << fixed << setprecision(2);
    cout << "\nNome    : " << nome << endl;
    cout << "Salario : " << salario << endl;

    return 0;
}
