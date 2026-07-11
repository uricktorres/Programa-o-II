#include <iostream>
using namespace std;

class MatrizDinamica {
private:
    int linhas;
    int colunas;
    int** dados;

public:
    MatrizDinamica(int l, int c) {
        linhas = l;
        colunas = c;

        dados = new int*[linhas];
        for (int i = 0; i < linhas; i++) {
            dados[i] = new int[colunas];
            for (int j = 0; j < colunas; j++) {
                dados[i][j] = 0;
            }
        }
    }

    MatrizDinamica(const MatrizDinamica& outra) {
        linhas = outra.linhas;
        colunas = outra.colunas;

        dados = new int*[linhas];
        for (int i = 0; i < linhas; i++) {
            dados[i] = new int[colunas];
            for (int j = 0; j < colunas; j++) {
                dados[i][j] = outra.dados[i][j];
            }
        }
    }

    ~MatrizDinamica() {
        for (int i = 0; i < linhas; i++) {
            delete[] dados[i];
        }
        delete[] dados;
    }

    void setValor(int i, int j, int valor) {
        dados[i][j] = valor;
    }

    void mostrar() {
        for (int i = 0; i < linhas; i++) {
            for (int j = 0; j < colunas; j++) {
                cout << dados[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    MatrizDinamica m1(2, 2);
    m1.setValor(0, 0, 10);
    m1.setValor(0, 1, 20);
    m1.setValor(1, 0, 30);
    m1.setValor(1, 1, 40);

    MatrizDinamica m2 = m1;

    m2.mostrar();

    return 0;
}