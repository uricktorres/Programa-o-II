#include <iostream>
#include <string>
using namespace std;

class Gato {
private:
    string nome;
    int idade;
    double peso;

public:
    Gato(string n, int i, double p) {
        nome = n;
        idade = i;
        setPeso(p);
    }

    void setPeso(double p) {
        if (p > 0) {
            peso = p;
        }
    }

    string getNome() {
        return nome;
    }

    int getIdade() {
        return idade;
    }

    double getPeso() {
        return peso;
    }
};

int main() {
    Gato gato("Mingau", 3, 4.5);

    cout << gato.getNome() << endl;
    cout << gato.getIdade() << endl;
    cout << gato.getPeso() << endl;

    return 0;
}
