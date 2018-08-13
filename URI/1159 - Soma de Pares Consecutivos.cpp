#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	int pc, c;
	while (1){
		c = 5;
		cin >> n;
			if (n == 0)
				break;
		pc = n;
		if (n%2 != 0)
			pc++;
		n = 0;
		while(c--){
			n += pc;
			pc += 2;
		}
		
		cout << n << endl;
	}
	
	return 0;
}
