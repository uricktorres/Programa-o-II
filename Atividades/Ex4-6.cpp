#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    stack<string> palavras;
    int opcao;
    string palavra;

    do {
        cout << "1 - Digitar palavra\n";
        cout << "2 - Desfazer ultima palavra\n";
        cout << "3 - Mostrar topo\n";
        cout << "0 - Sair\n";
        cin >> opcao;
        cin.ignore();

        switch (opcao) {
            case 1:
                getline(cin, palavra);
                palavras.push(palavra);
                break;
            case 2:
                if (!palavras.empty()) {
                    palavras.pop();
                }
                break;
            case 3:
                if (!palavras.empty()) {
                    cout << "Topo: " << palavras.top() << endl;
                }
                break;
        }
    } while (opcao != 0);

    return 0;
}
