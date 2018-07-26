#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	unsigned long long int n;
	cin >> t;
	while (t--){
		cin >> n;
		n = pow(2,n) - 1;
		cout << n << endl;
	}
	return 0;
}
