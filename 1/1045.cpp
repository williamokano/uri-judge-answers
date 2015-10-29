#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    double A, B, C;
    cin >> A >> B >> C;
    vector<double> lados;
    lados.push_back(A);
    lados.push_back(B);
    lados.push_back(C);

    sort(lados.begin(), lados.end());

    A = lados[2];
    B = lados[1];
    C = lados[0];

    /* define ordem das variaveis */

    /* testa nao forma */
    if (A >= B + C) {
        cout << "NAO FORMA TRIANGULO" << endl;
    } else {
        /* testa triangulo retangulo */
        if ((A*A) == (B*B) + (C*C)) {
            cout << "TRIANGULO RETANGULO" << endl;
        }

        /* testa triangulo obstusangulo */
        if ((A*A) > (B*B) + (C*C)) {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }

        /* testa triangulo acutangulo */
        if ((A*A) < (B*B) + (C*C)) {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }

        /* testa triangulo equilatero */
        if (A == B && B == C) {
            cout << "TRIANGULO EQUILATERO" << endl;
        }

        /* testa triangulo isosceles */
        if ((A == B && A != C) || (A == C && A != B) || (B == C && B != A)) {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
    return 0;
}
