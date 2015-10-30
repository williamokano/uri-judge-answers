#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1131*/
int main()
{
    int inter, gremio;
    int repete;
    int grenais = 0;
    int inter_vit = 0, grem_vit = 0, empates = 0;

    do {
        grenais++;
        cin >> inter >> gremio;
        cout << "Novo grenal (1-sim 2-nao)" << endl;

        if (inter > gremio) {
            inter_vit++;
        } else if (inter < gremio) {
            grem_vit++;
        } else {
            empates++;
        }

        cin >> repete;
    } while (repete == 1);

    cout << grenais << " grenais" << endl;
    cout << "Inter:" << inter_vit << endl;
    cout << "Gremio:" << grem_vit << endl;
    cout << "Empates:" << empates << endl;

    if (inter_vit > grem_vit) {
        cout << "Inter venceu mais" << endl;
    } else if (inter_vit < grem_vit) {
        cout << "Gremio venceu mais" << endl;
    } else {
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}
