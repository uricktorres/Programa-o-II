#include <iostream>
using namespace std;

int main() {
    int idade, autorizacao, nivel;

    cin >> idade >> autorizacao >> nivel;

    if (idade < 16) {
        cout << "acesso negado";
    } else if (idade <= 17) {
        if (autorizacao == 1) {
            cout << "acesso permitido";
        } else {
            cout << "acesso negado";
        }
    } else {
        switch (nivel) {
            case 1:
                cout << "acesso basico";
                break;
            case 2:
                cout << "acesso intermediario";
                break;
            case 3:
                cout << "acesso total";
                break;
            default:
                cout << "nivel invalido";
        }
    }

    return 0;
}