#include <iostream>
using namespace std;

inline double converter(double dolar) {
    return dolar * 5.50;
}

int main() {
    double dolar;

    cin >> dolar;

    cout << converter(dolar);

    return 0;
}