#include <iostream>
using namespace std;

int main() {
    int numero, soma = 0;

    cin >> numero;

    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma += i;
        }
    }

    if (soma == numero) {
        cout << "Numero perfeito";
    } else {
        cout << "Nao e perfeito";
    }

    return 0;
}