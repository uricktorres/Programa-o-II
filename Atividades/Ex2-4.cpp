#include <iostream>
using namespace std;

int soma(int a, int b) {
    return a + b;
}

int main() {
    int x, y;

    cin >> x >> y;

    cout << soma(x, y);

    return 0;
}