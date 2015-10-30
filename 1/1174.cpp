#include <iostream>
#include <iomanip>
#include <cmath>
#include <map>

using namespace std;

/* solucao 1174*/
int main()
{
    double entrada;
    cout << fixed << showpoint << setprecision(1);
    for (int i = 0; i < 100; i++) {
        cin >> entrada;
        if (entrada <= 10) {
            cout << "A[" << i << "] = " << entrada << endl;
        }
    }

    return 0;
}
