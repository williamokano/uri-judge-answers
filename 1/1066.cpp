#include <iostream>

using namespace std;

/* solucao 1065 */
int main()
{
    int entrada, pares, impares, positivos, negativos;
    pares = impares = positivos = negativos = 0;
    for (int i = 0; i < 5; i++) {
        cin >> entrada;
        if (entrada % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        if (entrada > 0) {
            positivos++;
        } else if (entrada < 0) {
            negativos++;
        }
    }

    cout << pares << " valor(es) par(es)" << endl;
    cout << impares << " valor(es) impar(es)" << endl;
    cout << positivos << " valor(es) positivo(s)" << endl;
    cout << negativos << " valor(es) negativo(s)" << endl;

    return 0;
}
