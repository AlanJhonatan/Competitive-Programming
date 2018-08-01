#include <bits/stdc++.h>
#define bkl cout<<endl;
#define ulli unsigned long long int
using namespace std;
int main() {
	double a,b,c,d,r1,r2;
	cin >> a >> b >> c;
	if (a == 0) {
		cout << "Impossivel calcular" << endl;
		return 0;
	}
	d = pow(b,2) - 4 * a * c;
	if (d <= 0) {
		cout << "Impossivel calcular" << endl;
		return 0;
	}
	r1 = (- b + sqrt(d)) / (2 * a);
	r2 = (- b - sqrt(d)) / (2 * a);
	
	cout << fixed << setprecision(5);
	cout << "R1 = " << r1 << endl;
	cout << "R2 = " << r2 << endl;
}
