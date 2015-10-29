#include <iostream>

using namespace std;

/* solucao 1060 */
int main()
{
	int i = 0, positivos = 0;
	double temp;

	for (i = 0; i < 6; i++) {
        cin >> temp;
        if (temp >= 0) {
            positivos++;
        }
	}

	cout << positivos << " valores positivos" << endl;

    return 0;
}
