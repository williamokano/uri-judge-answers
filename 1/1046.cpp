#include <iostream>

using namespace std;

/* solucao 1046 */
int main()
{
    int inicio, termino;
    cin >> inicio>> termino;

    /* se o inicio for maior ou igual que o termino, então terminou no outro dia */
    if (inicio >= termino) {
        termino += 24;
    }

    cout << "O JOGO DUROU " << termino - inicio << " HORA(S)" << endl;

    return 0;
}
