#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/* solucao 1156*/
int main()
{
    double soma = 1;
    double A = 3;
    double B = 2;
    for (int i = 1; i <= 100; i++) {
        soma += A/B;
        A+=2;
        B*=2;
    }

    cout << fixed << showpoint << setprecision(2);
    cout << soma << endl;

    return 0;
}
