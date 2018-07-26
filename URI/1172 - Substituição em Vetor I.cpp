#include <bits/stdc++.h>
using namespace std;
int main () {
	int i,b;
	vector<int> a;
	for (i = 0; i < 10; i++){
		cin >> b;
		if (b <= 0) {
			a.push_back(1);
		} else {
			a.push_back(b);
		}
	}
	for (i = 0; i < 10; i++){
		cout << "X[" << i << "] = " << a[i] << endl;
	}
	return 0;
}
