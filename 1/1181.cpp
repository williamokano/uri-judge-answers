#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

/* solucao 1181*/
int main()
{
    int linha;
    char op;
    double entrada, soma = 0;

    cin >> linha >> op;
    double matrix[12][12];

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << fixed << showpoint << setprecision(1);
    for (int i = 0; i < 12; i++) {
        soma += matrix[linha][i];
    }
    if (op == 'S') {
        cout << soma << endl;
    } else {
        cout << soma / 12.0 << endl;
    }
    return 0;
}
