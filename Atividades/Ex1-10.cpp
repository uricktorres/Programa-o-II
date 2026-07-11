#include <iostream>
#include <string>
using namespace std;

class Veiculo {
public:
    string marca;

    virtual void emitirSom() {
        cout << "Ruido generico do motor." << endl;
    }
};

class Carro : public Veiculo {
public:
    int numeroPortas;

    void emitirSom() override {
        cout << "Bii bii!" << endl;
    }
};

int main() {
    Carro carro;

    carro.marca = "Ford";
    carro.numeroPortas = 4;

    cout << "Marca: " << carro.marca << endl;
    cout << "Numero de portas: " << carro.numeroPortas << endl;

    carro.emitirSom();

    return 0;
}