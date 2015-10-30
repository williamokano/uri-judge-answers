#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

/* solucao 1179*/
int main()
{
    vector<int> par, impar;
    int entrada;

    for (int i = 0; i < 15; i++) {
        cin >> entrada;

        if (entrada % 2 == 0) {
            par.push_back(entrada);

            if (par.size() == 5) {
                for (int j = 0; j < 5; j++) {
                    cout << "par["  << j << "] = " << par[j] << endl;
                }
                par.clear();
            }
        } else {
            impar.push_back(entrada);

            if (impar.size() == 5) {
                for (int j = 0; j < 5; j++) {
                    cout << "impar["  << j << "] = " << impar[j] << endl;
                }
                impar.clear();
            }
        }
    }

    if (impar.size() > 0) {
        for (int i = 0; i < impar.size(); i++) {
            cout << "impar["  << i << "] = " << impar[i] << endl;
        }
    }

    if (par.size() > 0) {
        for (int i = 0; i < par.size(); i++) {
            cout << "par["  << i << "] = " << par[i] << endl;
        }
    }

    return 0;
}
