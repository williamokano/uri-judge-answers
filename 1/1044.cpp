#include <iostream>
#include <cmath>

using namespace std;

bool checkMultiples(int A, int B) {
    return A % B == 0;
}
void swap(int &A, int &B) {
    A = A ^ B;
    B = A ^ B;
    A = A ^ B;
}
int main()
{
    int A, B, minimo, maximo;
    bool saoMultiplos = false;
    cin >> A >> B;

    maximo = max(A, B);
    minimo = min(A, B);

    /* testa */
    if (A == 0) {
        cout << "Sao Multiplos" << endl;
    } else {
        if (minimo == 0) {
            swap(maximo, minimo);
        }
        saoMultiplos = checkMultiples(maximo, minimo);
        if (saoMultiplos) {
            cout << "Sao Multiplos" << endl;
        } else {
            cout << "Nao sao Multiplos" << endl;
        }
    }
    return 0;
}
