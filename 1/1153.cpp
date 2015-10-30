#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1153*/
int main()
{
    int N;
    int fat = 1;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        fat *= i;
    }
    cout << fat << endl;

    return 0;
}
