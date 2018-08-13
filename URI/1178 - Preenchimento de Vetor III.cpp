#include <bits/stdc++.h>
using namespace std;
int main (){
	double x;
	cin >> x;
	vector <double> v;
	v.push_back(x);
	for (int  i = 1; i < 100; i++){
		x = x/2;
		v.push_back(x);
	}
	for (int  i = 0; i < 100; i++){
		cout << "N[" << i << "] = " << fixed << setprecision(4) << v[i] << endl;
	}
	return 0;
}
