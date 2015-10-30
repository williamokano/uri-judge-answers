#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1134*/
int main()
{
    int entrada, alc = 0, gas = 0, dies = 0;

    do {
        do {
            cin >> entrada;
            switch (entrada) {
                case 1: alc++; break;
                case 2: gas++; break;
                case 3: dies++; break;
            }
        } while (entrada < 1 || entrada > 4);
    } while (entrada != 4);

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alc << endl;
    cout << "Gasolina: " << gas << endl;
    cout << "Diesel: " << dies << endl;

    return 0;
}
