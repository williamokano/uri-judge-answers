#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

bool verificaRegraLados(double L1, double L2, double L3) {
    double fator1, fator2;
    fator1 = abs(L2 - L3);
    fator2 = L2 + L3;

    return fator1 < L1 && L1 < fator2;
}

bool checaTriangulo(double A, double B, double C) {
    if (A < 0 || B < 0 || C < 0) {
        return false;
    }

    return verificaRegraLados(A, B, C) && verificaRegraLados(B, C, A) && verificaRegraLados(C, A, B);
}

int main()
{
    double A, B, C, perimetro, area;

    cin >> A >> B >> C;
    perimetro = A + B + C;
    area = ((A + B) * C) / 2;
    bool isTriangulo = checaTriangulo(A, B, C);

    cout << fixed << showpoint << setprecision(1);

    if (isTriangulo) {
        cout << "Perimetro = " << perimetro << endl;
    } else {
        cout << "Area = " << area << endl;
    }

    return 0;
}
