#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/* solucao 1157*/
int main()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            cout << i << endl;
        }
    }

    return 0;
}
