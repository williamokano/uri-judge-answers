#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1097*/
int main()
{
    int i = 1, j = 7;

    for (int i = 1; i <=9; i += 2) {
        for (int a = 0; a < 3; a++){
            cout << "I=" << i << " " << "J=" << j-a << endl;
        }
        j += 2;
    }

    return 0;
}
