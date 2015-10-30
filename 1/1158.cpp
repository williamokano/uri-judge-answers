#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/* solucao 1158*/
int main()
{
    int num_casos;
    int X, Y;
    int soma = 0;
    cin >> num_casos;

    for (int i = 0; i < num_casos; i++) {
        soma = 0;
        cin >> X >> Y;
        if (X % 2 == 0) {
            X++;
        }

        for (int j = 0; j < Y; j++) {
            soma += X + (j * 2);
        }


        cout << soma << endl;
    }

    return 0;
}
