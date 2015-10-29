#include <iostream>

using namespace std;

/* solucao 1059 */
int main()
{
    int mes;
    string meses[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    cin >> mes;
    mes--;

    cout << meses[mes] << endl;

    return 0;
}
