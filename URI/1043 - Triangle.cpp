#include <bits/stdc++.h>
#define bkl cout<<endl;
#define ulli unsigned long long int
using namespace std;
int main() {
	double a,b,c,r;
	cin >> a >> b >>c;
	cout << fixed << setprecision(1);
	if (abs(a - b) >= c){
		r = ((a+b) * c)/2;
		cout << "Area = " << r << endl;
	} else {
		cout << "Perimetro = " << a+b+c << endl;
	}
	return 0;
}
