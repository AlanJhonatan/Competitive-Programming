#include <bits/stdc++.h>
using namespace std;
int main (){
	int x,a = 6,c;
	cin >> x;
	if (x%2 == 0)
		c = 1;
	else 
		c = 2;
	while(a--){
		cout << x+c << endl;
		c += 2;
	}
}
