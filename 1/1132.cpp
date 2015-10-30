#include <iostream>
#include <iomanip>

using namespace std;
const int MULTIPLO = 13;
/* solucao 1132*/
int main()
{
    int A, B, primeiroMultiploTreze;
    int soma = 0;
    cin >> A >> B;

    /* swap valores */
    if (A > B) {
        A = A ^ B;
        B = A ^ B;
        A = A ^ B;
    }

    soma = (A + B) * (B - A + 1) / 2;

    /* acha o próximo multiplo de 13 >= A */
    primeiroMultiploTreze = A + (MULTIPLO - (A % MULTIPLO));
    for (int i = primeiroMultiploTreze; i <= B; i += MULTIPLO) {
        soma -= i;
    }

    cout << soma << endl;

    return 0;
}
