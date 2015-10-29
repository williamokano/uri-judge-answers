#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1079 */
int main()
{
    int num_casos;
    cin >> num_casos;
    double A, B, C, media;
    int P1, P2, P3;
    P1 = 2;
    P2 = 3;
    P3 = 5;

    for (int i = 0; i < num_casos; i++) {
        media = 0;
        cin >> A >> B >> C;

        media = ((A*P1) + (B*P2) + (C*P3)) / (P1+P2+P3);
        cout << fixed << showpoint << setprecision(1);
        cout << media << endl;
    }

    return 0;
}
