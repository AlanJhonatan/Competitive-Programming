#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	vector <int> v;
	v.push_back(n);
	for (int i = 1; i < 10; i++){
		n += n;
		v.push_back(n);
	}
	for (int i = 0; i < 10; i++){
		cout << "N[" << i << "] = "<< v[i] << endl;
	}
	return 0;
}
