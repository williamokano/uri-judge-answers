#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1096*/
int main()
{
    int i = 1, j = 7;

    for (int i = 1; i <=9; i += 2) {
        for (int a = 0; a < 3; a++){
            cout << "I=" << i << " " << "J=" << j-a << endl;
        }
    }

    return 0;
}


/*
versão migué
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "I=1 J=7" << endl;
    cout << "I=1 J=6" << endl;
    cout << "I=1 J=5" << endl;

    cout << "I=3 J=7" << endl;
    cout << "I=3 J=6" << endl;
    cout << "I=3 J=5" << endl;

    cout << "I=5 J=7" << endl;
    cout << "I=5 J=6" << endl;
    cout << "I=5 J=5" << endl;

    cout << "I=7 J=7" << endl;
    cout << "I=7 J=6" << endl;
    cout << "I=7 J=5" << endl;

    cout << "I=9 J=7" << endl;
    cout << "I=9 J=6" << endl;
    cout << "I=9 J=5" << endl;

    return 0;
}

*/