#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    vector<int> dados;
    int iTmp;
    for (int i = 0; i < 3; i++) {
        cin >> iTmp;
        dados.push_back(iTmp);
    }

    vector<int> ordenado(dados);
    sort(ordenado.begin(), ordenado.end());

    for (auto val : ordenado) {
        cout << val << endl;
    }

    cout << endl;

    for (auto val : dados) {
        cout << val << endl;
    }

    return 0;
}
