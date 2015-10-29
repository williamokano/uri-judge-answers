#include <iostream>

using namespace std;

/* solucao 1074 */
int main()
{
    int num_casos, entrada;
    cin >> num_casos;
    string odd_even;
    string positive_negative;
    for (int i = 0; i < num_casos; i++) {
        odd_even = "";
        positive_negative = "";
        cin >> entrada;
        if (entrada == 0) {
            positive_negative = "NULL";
        } else if (entrada > 0) {
            positive_negative = " POSITIVE";
        } else {
            positive_negative = " NEGATIVE";
        }

        if (entrada != 0) {
            if (entrada % 2 == 0) {
                odd_even = "EVEN";
            } else {
                odd_even = "ODD";
            }
        }

        cout << odd_even << positive_negative << endl;
    }

    return 0;
}
