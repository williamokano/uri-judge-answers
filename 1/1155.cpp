#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1155*/
int main()
{
    double soma = 0;
    for (int i = 1; i <= 100; i++) {
        soma += 1.0 / (float)i;
    }

    cout << fixed << showpoint << setprecision(2);
    cout << soma << endl;

    return 0;
}
