#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1101*/
int main()
{
    int X, Y;
    int soma = 0;
    cin >> X >> Y;

    while (X > 0 && Y > 0) {
        soma = 0;
        if (X > Y) {
            X = X ^ Y;
            Y = X ^ Y;
            X = X ^ Y;
        }

        for (int i = X; i <= Y; i++) {
            soma += i;
            cout << i << " ";
        }
        cout << "Sum=" << soma << endl;
        cin >> X >> Y;
    }

    return 0;
}
