#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1133*/
int main()
{
    int A, B;
    cin >> A >> B;

    /* swap valores */
    if (A > B) {
        A = A ^ B;
        B = A ^ B;
        A = A ^ B;
    }

    for (int i = A+1; i < B; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            cout << i << endl;
        }
    }

    return 0;
}
