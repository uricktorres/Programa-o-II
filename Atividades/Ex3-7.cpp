#include <iostream>
using namespace std;

class Termometro {
private:
    double temperaturaCelsius;

public:
    Termometro() {
        temperaturaCelsius = 25.0;
    }

    void setTemperaturaCelsius(double t) {
        if (t >= -273.15) {
            temperaturaCelsius = t;
        }
    }

    double getTemperaturaCelsius() {
        return temperaturaCelsius;
    }

    double getTemperaturaFahrenheit() {
        return (temperaturaCelsius * 9.0 / 5.0) + 32.0;
    }
};

int main() {
    Termometro t;

    t.setTemperaturaCelsius(30);

    cout << t.getTemperaturaCelsius() << endl;
    cout << t.getTemperaturaFahrenheit() << endl;

    return 0;
}
