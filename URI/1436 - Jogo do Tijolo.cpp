#include <bits/stdc++.h>
using namespace std;
int main () {
	int t,j,n;
	cin >> t;
	for (int i = 1; i <= t; i++){
		vector <int> md;	
		cin >> j;
		while (j--){
			cin >> n;
			md.push_back(n);
		}
		int pos = (md.size()/2);
		cout << "Case " << i << ": " << md[pos] <<endl;
	}
	return 0;
}
