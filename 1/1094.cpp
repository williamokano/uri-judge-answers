#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1094 */
int main()
{
    int num_casos;
    int cobaias;
    char tipo_cobaia;

    int coelhos = 0;
    int ratos = 0;
    int sapos = 0;
    int total = 0;

    double perc_coelhos, perc_ratos, perc_sapos;
    perc_coelhos = perc_ratos = perc_sapos = 0;

    cin >> num_casos;

    for (int i = 0; i < num_casos; i++) {
        cin >> cobaias >> tipo_cobaia;

        if (tipo_cobaia == 'C') {
            coelhos += cobaias;
        }

        if (tipo_cobaia == 'R') {
            ratos += cobaias;
        }

        if (tipo_cobaia == 'S') {
            sapos += cobaias;
        }
    }
    total = coelhos + ratos + sapos;
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;

    cout << fixed << showpoint << setprecision(2);
    perc_coelhos = ((float)coelhos / (float)total) * 100;
    perc_ratos = ((float)ratos / (float)total) * 100;
    perc_sapos = ((float)sapos / (float)total) * 100;

    cout << "Percentual de coelhos: " << perc_coelhos << " %" << endl;
    cout << "Percentual de ratos: " << perc_ratos << " %" << endl;
    cout << "Percentual de sapos: " << perc_sapos << " %" << endl;


    return 0;
}
