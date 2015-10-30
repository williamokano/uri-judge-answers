#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

/* solucao 1177*/
int main()
{
    int entrada;
    cin >> entrada;

    for (int i = 0; i < 1000; i++) {
        cout << "N[" << i << "] = " <<  i % entrada << endl;
    }

    return 0;
}
