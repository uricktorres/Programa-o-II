#include <iostream>
#include <string>
using namespace std;

class StringSegura {
private:
    string texto;

public:
    StringSegura() = default;
    StringSegura(string t) : texto(t) {}

    StringSegura(const StringSegura&) = default;
    StringSegura& operator=(const StringSegura&) = delete;

    StringSegura(StringSegura&&) = default;
    StringSegura& operator=(StringSegura&&) = default;

    string getTexto() const {
        return texto;
    }
};

int main() {
    StringSegura s1("Ola");
    StringSegura s2("Teste");

    s2 = std::move(s1);

    cout << s2.getTexto() << endl;

    return 0;
}