#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	
	cin >> t;
	
	while (t--) {
		unsigned long long int l= 1,ql= 0;
		int n
		cin >> n;
		while (1){
			if (n < l)
				break;
		  n =  n - l;
		  l++;
		  ql++;
		}
		cout << ql << endl;
	}
	return 0;	
}

