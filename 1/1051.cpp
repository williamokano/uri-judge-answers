#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1051 */
int main()
{
    double salario, porcentagem, imposto;
    cin >> salario;

    /* pago quanto na faixa [0-2000] */
    imposto = 0;

    /* pago quanto na faixa (2000-3000] */
    porcentagem = 0.08;
    if (salario > 3000) {
        imposto += 1000 * porcentagem;
    } else {
        if (salario > 2000) {
            imposto += (salario - 2000) * porcentagem;
        }
    }

    /* pago quanto na faixa (3000-4500] */
    porcentagem = 0.18;
    if (salario > 4500) {
        imposto += 1500 * porcentagem;
    } else {
        if (salario > 3000) {
            imposto += (salario - 3000) * porcentagem;
        }
    }

    /* pago quanto na faixa (4500+ */
    porcentagem = 0.28;
    if (salario > 4500) {
        imposto += (salario - 4500) * porcentagem;
    }

    if (imposto == 0) {
        cout << "Isento" << endl;
    } else {
        cout << fixed << showpoint << setprecision(2);
        cout << "R$ " << imposto << endl;
    }

    return 0;
}
