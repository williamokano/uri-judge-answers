#include <iostream>
#include <cmath>

using namespace std;

/* solucao 1067 */
int main()
{
    int A, B, limite1, limite2, counter = 0;
    cin >> A >> B;

    limite1 = A;
    limite2 = B;

    if (A > B) {
        limite1 = B;
        limite2 = A;
    }

    limite1++;

    for (int i = limite1; i < limite2; i++) {
        if (abs(i % 2) == 1) {
            counter += i;
        }
    }

    cout << counter << endl;

    return 0;
}
