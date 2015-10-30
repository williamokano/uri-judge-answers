#include <iostream>
#include <iomanip>
#include <cmath>
#include <map>

using namespace std;

/* solucao 1160*/
int main()
{
    int num_casos;
    int popA, popB, anos;
    double txCA, txCB;
    cin >> num_casos;

    for (int i = 0; i < num_casos; i++) {
        anos = 0;
        cin >> popA >> popB >> txCA >> txCB;
        txCA /= 100;
        txCB /= 100;
        while (popA <= popB) {
            popA *= (1 + txCA);
            popB *= (1 + txCB);
            anos++;
            if (anos > 100) {
                break;
            }
        }
        if (anos > 100) {
            cout << "Mais de 1 seculo." << endl;
        } else {
            cout << anos << " anos." << endl;
        }
    }
    return 0;
}
