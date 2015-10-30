#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/* solucao 1159*/
int main()
{
    int X;
    int soma = 0;
    cin >> X;
    while (X != 0) {
        soma = 0;
        if (X % 2 != 0) {
            X++;
        }

        soma = (X + X + 8) * 5 / 2;

        cout << soma << endl;
        cin >> X;
    }

    return 0;
}
