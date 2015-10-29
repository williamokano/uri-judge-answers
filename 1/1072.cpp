#include <iostream>

using namespace std;

/* solucao 1072 */
int main()
{
    int num_casos = 0, entrada = 0;
    int in = 0, out = 0;
    cin >> num_casos;

    for (int i = 0; i < num_casos; i++) {
        cin >> entrada;

        if (entrada >= 10 && entrada <= 20) {
            in++;
        } else {
            out++;
        }
    }

    cout << in << " in" << endl << out << " out" << endl;

    return 0;
}
