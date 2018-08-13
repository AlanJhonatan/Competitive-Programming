#include <bits/stdc++.h>
using namespace std;
int main (){
	int x,z,acum=0,c=0;
	cin >> x;
	while (1){
		cin >> z;
		if (z > x)
			break;
	}
	acum = x;
	while (x < z){
		x += acum;
		acum++;
		c++;
	}
	cout << c+1 << endl;
	return 0;
}
