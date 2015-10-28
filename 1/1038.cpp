#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

int main()
{
    map<int, double> cardapio_precos;
    int opcao, qtd;
    double total;

    cardapio_precos[1] = 4.00;
    cardapio_precos[2] = 4.50;
    cardapio_precos[3] = 5.00;
    cardapio_precos[4] = 2.00;
    cardapio_precos[5] = 1.50;

    cin >> opcao >> qtd;

    total = qtd * cardapio_precos[opcao];

    cout << fixed << setprecision(2) << showpoint;
    cout << "Total: R$ " << total << endl;

    return 0;
}
