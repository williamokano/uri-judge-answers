#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1115*/
int main()
{
    int X, Y;

    cin >> X >> Y;

    while (X != 0 && Y != 0) {

        if (X > 0 && Y > 0) {
            cout << "primeiro" << endl;
        }

        if (X < 0 && Y > 0) {
            cout << "segundo" << endl;
        }

        if (X < 0 && Y < 0) {
            cout << "terceiro" << endl;
        }

        if (X > 0 && Y < 0) {
            cout << "quarto" << endl;
        }
        cin >> X >> Y;
    }

    return 0;
}
