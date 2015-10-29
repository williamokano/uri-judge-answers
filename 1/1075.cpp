#include <iostream>

using namespace std;

/* solucao 1075 */
int main()
{
    int entrada;
    cin >> entrada;

    for (int i = 2; i < 10000; i += entrada) {
        cout << i << endl;
    }

    return 0;
}
