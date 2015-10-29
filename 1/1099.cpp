#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1099*/
int main()
{
    int num_casos;
    int X, Y;
    int soma = 0;
    cin >> num_casos;

    for (int i = 0; i < num_casos; i++) {
        cin >> X >> Y;
        soma = 0;
        if (X > Y) {
            X = X ^ Y;
            Y = X ^ Y;
            X = X ^ Y;
        }

        for (int j = X+1; j < Y; j++) {
            if (j % 2 != 0) {
                soma += j;
            }
        }

        cout << soma << endl;
    }

    return 0;
}
