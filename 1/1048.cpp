#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1048 */
int main()
{
    double salario, novo_salario, porcentagem, reajuste;
    cin >> salario;

    /* reajuste 1 */
    if (salario <= 400) {
        porcentagem = 0.15;
        novo_salario = salario * (1 + porcentagem);
        reajuste = salario * porcentagem;
    }

    /* reajuste 2 */
    if (salario > 400 && salario <= 800) {
        porcentagem = 0.12;
        novo_salario = salario * (1 + porcentagem);
        reajuste = salario * porcentagem;
    }

    /* reajuste 3 */
    if (salario > 800 && salario <= 1200) {
        porcentagem = 0.10;
        novo_salario = salario * (1 + porcentagem);
        reajuste = salario * porcentagem;
    }

    /* reajuste 4 */
    if (salario > 1200 && salario <= 2000) {
        porcentagem = 0.07;
        novo_salario = salario * (1 + porcentagem);
        reajuste = salario * porcentagem;
    }

    /* reajuste 5 */
    if (salario > 2000) {
        porcentagem = 0.04;
        novo_salario = salario * (1 + porcentagem);
        reajuste = salario * porcentagem;
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "Novo salario: " << novo_salario << endl;
    cout << "Reajuste ganho: " << reajuste << endl;

    cout << fixed << noshowpoint << setprecision(0);
    cout << "Em percentual: " << porcentagem * 100 << " %" << endl;

    return 0;
}
