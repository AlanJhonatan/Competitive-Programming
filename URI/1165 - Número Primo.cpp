#include <bits/stdc++.h>
using namespace std;
int main (){
	int t,c;
	cin >> t;
	int x,i;
	while (t--){
		c=0;
		cin >> x;
		for (i = 2; i <= sqrt(x); i++){
			if (x%i == 0){
				c = 1;
				break;
			}
		}
		if (c == 0 && x != 1)
			cout << x << " eh primo" << endl;
		else 
			cout << x << " nao eh primo" << endl;
			
	}
	return 0;
}
