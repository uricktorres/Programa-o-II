#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    double a[MAX];
    double *aPtr = a; // ponteiro para o primeiro elemento
    int n = 0;
    double valor;

    // Ler valores até EOF ou até atingir MAX
    while (n < MAX && (cin >> valor)) {
        *(a + n) = valor;     // mesma coisa que a[n], usa *(a + n)
        n++;
    }

    // se nenhum valor lido, evita divisão por zero
    if (n == 0) {
        cout << "Nenhum valor lido" << endl;
        return 0;
    }

    double soma = 0.0;
    for (int j = 0; j < n; j++) {
        soma += *(aPtr + j);  // acessa a[j] via ponteiro
    }

    double media = soma / n;

    cout << "Soma  : " << soma << endl;
    cout << "Media : " << media << endl;

    return 0;
}
