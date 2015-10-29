#include <iostream>

using namespace std;

/* solucao 1078 */
int main()
{
    int entrada;
    cin >> entrada;

    for (int i = 1; i <= 10; i++) {
        cout << i << " x " << entrada << " = " << i * entrada << endl;
    }

    return 0;
}
