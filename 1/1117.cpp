#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1117*/
int main()
{
    double temp;
    double n1, n2, media;

    cin >> temp;
    while (temp < 0 || temp > 10) {
        cout << "nota invalida" << endl;
        cin >> temp;
    }
    n1 = temp;

    cin >> temp;
    while (temp < 0 || temp > 10) {
        cout << "nota invalida" << endl;
        cin >> temp;
    }
    n2 = temp;

    media = (n1 + n2) / 2;

    cout << fixed << showpoint << setprecision(2);
    cout << "media = " << media << endl;


    return 0;
}
