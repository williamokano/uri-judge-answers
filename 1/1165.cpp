#include <iostream>
#include <iomanip>
#include <cmath>
#include <map>

using namespace std;

/* solucao 1165*/
int main()
{
    int num_casos;
    int entrada;
    bool tem_divisor = false;

    cin >> num_casos;

    for (int i = 0; i < num_casos; i++) {
        tem_divisor = false;
        cin >> entrada;
        for (int j = 2; j < entrada; j++) {
            if (entrada % j == 0) {
                tem_divisor = true;
                break;
            }
        }

        if (tem_divisor) {
            cout << entrada << " nao eh primo" << endl;
        } else {
            cout << entrada << " eh primo" << endl;
        }
    }

    return 0;
}
