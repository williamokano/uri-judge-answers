#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1113*/
int main()
{
    int X, Y;
    cin >> X >> Y;

    while (X != Y) {
        if (X > Y) {
            cout << "Decrescente" << endl;
        } else {
            cout << "Crescente" << endl;
        }
        cin >> X >> Y;
    }

    return 0;
}
