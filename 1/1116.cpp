#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1116*/
int main()
{
    int num_casos;
    int X, Y;
    double result;
    cin >> num_casos;

    for (int i = 0; i < num_casos; i++) {
        cin >> X >> Y;
        if (Y == 0) {
            cout << "divisao impossivel" << endl;
        } else {
            if (X == 0) {
                cout << "0.0" << endl;
            } else {
                result = ((double)X) / ((double)Y);
                cout << fixed << showpoint << setprecision(1);
                cout << result << endl;
            }
        }
    }
    return 0;
}
