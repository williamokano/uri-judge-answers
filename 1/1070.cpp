#include <iostream>

using namespace std;

/* solucao 1070 */
int main()
{
    int entrada, counter = 0;
    cin >> entrada;

    /* se não for ímpar, pula 1 */
    if (entrada % 2 == 0) {
        entrada++;
    }

    for (int i = 0; i < 6; i++) {
        cout << entrada + (2 * i) << endl;
    }

    return 0;
}
