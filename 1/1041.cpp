#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;

    /* testa origem */
    if (x == 0 && y == 0) {
        cout << "Origem" << endl;
    }

    /* testa eixo x */
    if (x == 0 && y != 0) {
        cout << "Eixo Y" << endl;
    }

    /* testa eixo y */
    if (x != 0 && y == 0) {
        cout << "Eixo X" << endl;
    }

    /* testa Q1 */
    if (x > 0 && y > 0) {
        cout << "Q1" << endl;
    }

    /* testa Q2 */
    if (x < 0 && y > 0) {
        cout << "Q2" << endl;
    }

    /* testa Q3 */
    if (x < 0 && y < 0) {
        cout << "Q3" << endl;
    }

    /* testa Q4 */
    if (x > 0 && y < 0) {
        cout << "Q4" << endl;
    }

    return 0;
}
