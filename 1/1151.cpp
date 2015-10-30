#include <iostream>
#include <iomanip>
#include <map>

using namespace std;

map<int, int> fib_cache;

int fib(int N) {
    if (N < 2) {
        return N;
    }

    if (fib_cache.count(N)) {
        return fib_cache[N];
    }
    int f = fib(N-1) + fib(N-2);
    fib_cache[N] = f;
    return f;
}

/* solucao 1151*/
int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N-1; i++) {
        cout << fib(i) << " ";
    }
    cout << fib(N-1) << endl;

    return 0;
}
