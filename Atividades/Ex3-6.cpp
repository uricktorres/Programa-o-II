#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<string> fila;
    int opcao;
    string documento;

    do {
        cout << "1 - Inserir documento\n";
        cout << "2 - Processar documento\n";
        cout << "3 - Mostrar proximo\n";
        cout << "0 - Sair\n";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1:
                getline(cin, documento);
                fila.push(documento);
                break;
            case 2:
                if (!fila.empty()) {
                    cout << "Processando: " << fila.front() << endl;
                    fila.pop();
                }
                break;
            case 3:
                if (!fila.empty()) {
                    cout << "Proximo: " << fila.front() << endl;
                }
                break;
        }
    } while (opcao != 0);

    return 0;
}
