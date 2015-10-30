#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1154*/
int main()
{
    int idade;
    int soma = 0;
    int qtd = 0;

    cin >> idade;
    while(idade >= 0) {
        soma += idade;
        qtd++;
        cin >> idade;
    }

    cout << fixed << showpoint << setprecision(2);
    cout << (float)soma/(float)qtd << endl;

    return 0;
}
