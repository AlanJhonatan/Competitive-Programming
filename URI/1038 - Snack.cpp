#include <bits/stdc++.h>
#define bkl cout<<endl;
#define ulli unsigned long long int
using namespace std;
int main() {
	double v[] = {4.00,4.50,5.00,2.00,1.50},t;
	int c,q;
	cin >> c >> q;
	t = v[c-1] * q;
	cout << fixed << setprecision(2);
	cout << "Total: R$ " << t << endl;
	return 0;	
}
