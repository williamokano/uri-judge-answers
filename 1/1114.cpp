#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1114*/
int main()
{
    string entrada;
    cin >> entrada;

    while (entrada != "2002") {
        cout << "Senha Invalida" << endl;
        cin >> entrada;
    }
    cout << "Acesso Permitido" << endl;

    return 0;
}
