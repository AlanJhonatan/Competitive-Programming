#include <bits/stdc++.h>
using namespace std;
int main (){
	int t,n=0;
	cin >> t;
	vector <int> v;
	for (int i = 0; i < 1000; i++){
		v.push_back(n);
		n++;
		if (n == t)
			n = 0;
	}
	for (int i = 0; i < 1000; i++){
		cout << "N[" << i << "] = " << v[i] << endl;
	}
	return 0;
}
