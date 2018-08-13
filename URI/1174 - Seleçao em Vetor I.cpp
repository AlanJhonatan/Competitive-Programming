#include <bits/stdc++.h>
using namespace std;
int main (){
	double n;
	vector <double> v;
	for (int i = 0; i < 100; i++){
		cin >> n;
		v.push_back(n);
	}
	for (int i = 0; i < 100; i++){
		if (v[i] <= 10.0)
			cout << "A[" << i << "] = " << fixed << setprecision(1) << v[i] << endl;
	}
	
	return 0;
}
