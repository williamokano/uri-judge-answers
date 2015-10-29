#include <iostream>
#include <iomanip>

using namespace std;

/* solucao 1098*/
/* leo~s help */
int main()
{
    double i = 1;
    //cout << fixed << showpoint << setprecision(1);
    for (i = 0; i <=2; i += 0.2) {
        for (int j = 1; j <= 3; j++){
            cout << "I=" << i << " " << "J=" << j+i << endl;
        }
    }

    return 0;
}
