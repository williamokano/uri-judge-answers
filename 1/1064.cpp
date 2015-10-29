#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/* solucao 1064 */
int main()
{
    double entrada, media = 0;
    int positivos = 0;

    for (int i = 0; i < 6; i++) {
        cin >> entrada;
        if (entrada > 0) {
            positivos++;
            media += entrada;
        }
    }

    cout << positivos << " valores positivos" << endl;
    cout << fixed << showpoint << setprecision(1);

    cout << media / positivos << endl;

    return 0;
}
