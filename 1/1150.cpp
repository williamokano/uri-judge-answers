#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1150*/
int main()
{
    int X, Z, soma = 0, total = 0;
    cin >> X;

    do {
        cin >> Z;
    } while (Z <= X);

    while (soma < Z) {
        soma += X++;
        total++;
    }

    cout << total << endl;

    return 0;
}
