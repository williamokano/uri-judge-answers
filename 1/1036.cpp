#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	double a, b, c, delta, x1, x2;
	cin >> a;
	cin >> b;
	cin >> c;

	delta = (b * b) - (4 * a * c);
	

	if (delta < 0 || a == 0) {
	    cout << "Impossivel calcular" << endl;
	} else {
	    x1 = (-b + sqrt(delta)) / (2 * a);
	    x2 = (-b - sqrt(delta)) / (2 * a);
	    
	    cout << setprecision(5) << setfill('0') << fixed << showpoint;
	    cout << "R1 = " << x1 << endl;
        cout << "R2 = " << x2 << endl;
	}
	return 0;
}