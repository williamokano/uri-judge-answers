#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1144*/
int main()
{
    double entrada;
    cin >> entrada;
    cout << fixed << noshowpoint << setprecision(0);
    for (int i = 1; i <= entrada; i++) {
        cout << i << " " << i*i << " " << i*i*i << endl;
        cout << i << " " << (i*i)+1 << " " << (i*i*i)+1 << endl;
    }

    return 0;
}
