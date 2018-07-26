#include <bits/stdc++.h>
using namespace std;

long double fat(int a){
	int b = a;
	if (b == 1 || b == 0)
		return 1;
	return fat(b-1) * a;
}

int main() {
	int n , m;
	while (cin >> n >> m){
	unsigned long long int r = fat(n) + fat(m);
	cout << r << endl;
	}
	return 0;
}
