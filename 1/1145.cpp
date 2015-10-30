#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1145*/
int main()
{
    int X, Y;
    cin >> X >> Y;

    for (int i = 1; i <= Y; i++) {
        cout << i;
        if (i % X == 0) {
            cout << endl;
        } else {
            cout << " ";
        }
    }


    return 0;
}
