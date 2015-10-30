#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1118*/
int main()
{
    double temp;
    double n1, n2, media;
    int repete;

    do {
        cin >> temp;
        while (temp < 0 || temp > 10) {
            cout << "nota invalida" << endl;
            cin >> temp;
        }
        n1 = temp;

        cin >> temp;
        while (temp < 0 || temp > 10) {
            cout << "nota invalida" << endl;
            cin >> temp;
        }
        n2 = temp;

        media = (n1 + n2) / 2;

        cout << fixed << showpoint << setprecision(2);
        cout << "media = " << media << endl;

        do {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> repete;
        } while (repete < 1 || repete > 2);

    } while(repete == 1);
    return 0;
}
