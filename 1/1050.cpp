#include <iostream>
#include <map>
#include <string>

using namespace std;

/* solucao 1049 */
int main()
{
    map<int, string> ddd_lista;
    int ddd;
    string cidade;

    ddd_lista[61] = "Brasilia";
    ddd_lista[71] = "Salvador";
    ddd_lista[11] = "Sao Paulo";
    ddd_lista[21] = "Rio de Janeiro";
    ddd_lista[32] = "Juiz de Fora";
    ddd_lista[19] = "Campinas";
    ddd_lista[27] = "Vitoria";
    ddd_lista[31] = "Belo Horizonte";

    cin >> ddd;

    cidade = ddd_lista[ddd];

    if (cidade == "") {
        cout << "DDD nao cadastrado" << endl;
    } else {
        cout << cidade << endl;
    }

    return 0;
}
