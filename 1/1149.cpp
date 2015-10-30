#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1149*/
int main()
{
    int A, N, soma = 0;
    cin >> A;

    do {
        cin >> N;
    } while (N < 1);

    for (int i = 0; i < N; i++) {
        soma += A+i;
    }

    cout << soma << endl;

    return 0;
}
