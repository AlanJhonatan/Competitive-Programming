#include <bits/stdc++.h>
using namespace std;
int main () {
	int l,c,p=0;
	cin >> l >> c;
	if (l%2 == 0){
		p++;	
	}
	if (c%2 == 0){
		p++	;
	}
	if (p == 2 || p == 0){
		cout << "1" << endl;
	} else {
		cout << "0" << endl;
	}
	return 0;
} 
