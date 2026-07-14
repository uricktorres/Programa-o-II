#include <iostream>
using namespace std;

int main() {
    int opcao;
    double saldo = 1000, valor;

    do {
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << saldo << endl;
                break;
            case 2:
                cin >> valor;
                if (valor > 0) saldo += valor;
                break;
            case 3:
                cin >> valor;
                if (valor > 0 && valor <= saldo) saldo -= valor;
                break;
        }
    } while (opcao != 4);

    return 0;
}
