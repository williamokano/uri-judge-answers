#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1080 */
int main()
{
    int entrada;
    int maior;
    int posicao;

    cin >> entrada;

    maior = entrada;
    posicao = 1;

    for (int i = 1; i < 100; i++) {
        cin >> entrada;
        if (entrada > maior) {
            maior = entrada;
            posicao = i+1;
        }
    }

    cout << maior << endl << posicao << endl;

    return 0;
}
