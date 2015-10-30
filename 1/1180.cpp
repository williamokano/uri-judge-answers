#include <iostream>
#include <vector>

using namespace std;

/* solucao 1180*/
int main()
{
    vector<int> N;
    int num_casos, entrada, maior, posicao;
    cin >> num_casos;

    for (int i = 0; i < num_casos; i++) {
        cin >> entrada;
        N.push_back(entrada);
    }

    posicao = 0;
    for (int i = 1; i < N.size(); i++) {
        if (N[i] < N[posicao]) {
            posicao = i;
        }
    }

    cout << "Menor valor: " << N[posicao] << endl;
    cout << "Posicao: " << posicao << endl;

    return 0;
}
