#include <iostream>
#include <iomanip>
#include <cmath>
#include <map>

using namespace std;

/* solucao 1172*/
int main()
{
    //int X[10] = {0};
    int entrada;

    for (int i = 0; i < 10; i++) {
        cin >> entrada;
        if (entrada <= 0) {
            entrada = 1;
        }
        cout << "X[" << i << "] = " << entrada << endl;
    }

    return 0;
}
