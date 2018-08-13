#include <bits/stdc++.h>
using namespace std;
int main (){
	double n,tx=0;
	cin >> n;
	if (n <= 2000.00){
		cout << "Isento" << endl;
	} else if (n >= 2000.01 && n <= 3000.00){
		n -= 2000;
		tx += n * 0.08;
		cout << "R$ " << fixed << setprecision(2) << tx << endl;
	} else if (n >= 3000.01 && n <= 4500.00){
		n -= 2000;
		tx += 1000 * 0.08;
		n -= 1000;
		tx += n * 0.18;
		cout << "R$ " << fixed << setprecision(2) << tx << endl;
	} else {
		n -= 2000;
		tx += 1000 * 0.08;
		n -= 1000;
		tx += 1500 * 0.18;
		n -= 1500;
		tx += n * 0.28;
		cout << "R$ " << fixed << setprecision(2) << tx << endl;
	}
	
	return 0;
}
