#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1143*/
int main()
{
    double entrada;
    cin >> entrada;
    cout << fixed << noshowpoint << setprecision(0);
    for (int i = 1; i <= entrada; i++) {
        cout << i << " " << i*i << " " << i*i*i << endl;
    }

    return 0;
}
