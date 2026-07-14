#include <iostream>
#include <iomanip>
using namespace std;

const int ANO = 2;
const int TRIMESTRE = 4;

int main() {
    double despesas[ANO][TRIMESTRE];
    double total = 0;

    for (int i = 0; i < ANO; i++) {
        for (int j = 0; j < TRIMESTRE; j++) {
            cin >> despesas[i][j];
            total += despesas[i][j];
        }
    }

    cout << fixed << setprecision(2);

    for (int i = 0; i < ANO; i++) {
        cout << "Ano " << i + 1 << ": ";
        for (int j = 0; j < TRIMESTRE; j++) {
            cout << despesas[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Total: " << total;

    return 0;
}
