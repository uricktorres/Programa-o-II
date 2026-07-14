#include <iostream>
using namespace std;

class Contador {
private:
    int valor;

public:
    Contador(int v) {
        if (v >= 0)
            valor = v;
        else
            valor = 0;
    }

    int getValor() {
        return valor;
    }

    Contador& operator++() {
        valor++;
        return *this;
    }

    Contador operator++(int) {
        Contador temp = *this;
        valor++;
        return temp;
    }
};

int main() {
    Contador c(5);

    cout << (++c).getValor() << endl;
    cout << (c++).getValor() << endl;
    cout << c.getValor() << endl;

    return 0;
}
