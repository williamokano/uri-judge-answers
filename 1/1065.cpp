#include <iostream>

using namespace std;

/* solucao 1065 */
int main()
{
    int entrada;
    int pares = 0;

    for (int i = 0; i < 5; i++) {
        cin >> entrada;
        if (entrada % 2 == 0) {
            pares++;
        }
    }

    cout << pares << " valores pares" << endl;

    return 0;
}
