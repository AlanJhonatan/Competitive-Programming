#include <bits/stdc++.h>
using namespace std;
int main (){
	int a = 0,b = 4, c = 0, r = 0;
	while(b--){
		cin >> a;
		if(a == 1)
			r = c + 1;
		
		c++;
	}
	cout << r << endl;
}
