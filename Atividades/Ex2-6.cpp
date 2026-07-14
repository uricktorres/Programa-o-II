#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lista;
    int opcao, valor;

    do {
        cout << "1 - Inserir no inicio\n";
        cout << "2 - Inserir no final\n";
        cout << "3 - Remover valor\n";
        cout << "4 - Mostrar tamanho\n";
        cout << "5 - Mostrar lista\n";
        cout << "0 - Sair\n";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cin >> valor;
                lista.push_front(valor);
                break;
            case 2:
                cin >> valor;
                lista.push_back(valor);
                break;
            case 3:
                cin >> valor;
                lista.remove(valor);
                break;
            case 4:
                cout << "Tamanho: " << lista.size() << endl;
                break;
            case 5:
                for (int x : lista) {
                    cout << x << " ";
                }
                cout << endl;
                break;
        }
    } while (opcao != 0);

    return 0;
}
