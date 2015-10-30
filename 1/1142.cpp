#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1142*/
int main()
{
    int linhas;
    cin >> linhas;

    for (int i = 0; i < linhas; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << (i*4) + j << " ";
        }
        cout << "PUM" << endl;
    }

    return 0;
}
