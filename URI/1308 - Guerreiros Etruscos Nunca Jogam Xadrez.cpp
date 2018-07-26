#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	unsigned long long int n,b,r;
	cin >> t;
	while (t--) {
		cin >> n;
		n = n*2;
		b = 1 - 4 *1 * (-n);
		r = (-1 + sqrt(b))/2;
		cout << r<< endl;
	}
	return 0;	
}
