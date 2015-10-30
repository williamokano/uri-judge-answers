#include <iostream>
#include <iomanip>
#include <cmath>
#include <map>
typedef unsigned long long int tipo_gigante;
using namespace std;

map<int, tipo_gigante> fib_cache;

tipo_gigante fib(int n) {
    if (n < 2) {
        return n;
    }

    if (fib_cache[n] != 0) {
        return fib_cache[n];
    }

    tipo_gigante temp;
    temp = fib(n-1) + fib(n-2);
    fib_cache[n] = temp;
    return temp;
}

/* solucao 1176*/
int main()
{
    int num_casos, N;
    cin >> num_casos;

    for (int i = 0; i < num_casos; i++) {
        cin >> N;
        cout << "Fib(" << N << ") = " << fib(N) << endl;
    }
    return 0;
}
