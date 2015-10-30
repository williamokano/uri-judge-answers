#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

/* solucao 1178*/
int main()
{
    double entrada;
    cin >> entrada;
    cout << fixed << showpoint << setprecision(4);
    for (int i = 0; i < 100; i++) {
        cout << "N[" << i << "] = " << entrada << endl;
        entrada /= 2;
    }

    return 0;
}
