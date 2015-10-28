#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;
bool testaIntervalo(string intervalo, double valor);
int main()
{
    std::vector<std::string> intervalos = {"[0,25]", "(25,50]", "(50,75]", "(75,100]"};
    bool encontrado = false;
    double valor = 0;

    cin >> valor;

    string intervalo_encontrado = "Fora de intervalo";
    for (auto intervalo : intervalos) {
        if (testaIntervalo(intervalo, valor)) {
            intervalo_encontrado = "Intervalo " + intervalo;
            break;
        }
    }

    cout << intervalo_encontrado << endl;

    return 0;
}

bool testaIntervalo(string intervalo, double valor) {
    int val1, val2;
    char intervalo1, intervalo2;
    bool valido = true;

    sscanf(intervalo.c_str(), "%c%d,%d%c", &intervalo1, &val1, &val2, &intervalo2);

    if (intervalo1 == '[') {
        valido &= valor >= val1;
    } else {
        valido &= valor > val1;
    }
    if (valido) {
        if (intervalo2 == ']') {
            valido &= valor <= val2;
        } else {
            valido &= valor < val2;
        }
    }

    return valido;
}
