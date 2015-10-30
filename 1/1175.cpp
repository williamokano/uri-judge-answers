#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

/* solucao 1175*/
int main()
{
    vector<int> dados;
    int entrada;
    cout << fixed << showpoint << setprecision(1);
    for (int i = 0; i < 20; i++) {
        cin >> entrada;
        dados.push_back(entrada);
    }

    reverse(dados.begin(), dados.end());

    for (int i = 0; i < dados.size(); i++) {
        cout << "N[" << i << "] = " <<  dados[i] << endl;
    }

    return 0;
}
