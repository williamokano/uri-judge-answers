#include <iostream>

using namespace std;

/* solucao 1073 */
int main()
{
    long int entrada;
    cin >> entrada;

    for (int i = 2; i <= entrada; i += 2) {
        cout << i << "^2" << " = " << i*i << endl;
    }

    return 0;
}
