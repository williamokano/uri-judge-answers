#include <iostream>
#include <iomanip>
#include <cmath>
#include <map>

using namespace std;

/* solucao 1164*/
int main()
{
    int num_casos;
    int entrada;
    int acumulador;

    cin >> num_casos;

    for (int x = 0; x < num_casos; x++) {
        acumulador = 0;
        cin >> entrada;

        for (int i = 1; i < entrada; i++) {
            if (entrada % i == 0) {
                acumulador += i;
            }
        }

        if (acumulador == entrada) {
            cout << entrada << " eh perfeito" << endl;
        } else {
            cout << entrada << " nao eh perfeito" << endl;
        }
    }
    return 0;
}
