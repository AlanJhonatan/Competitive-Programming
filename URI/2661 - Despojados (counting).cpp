#include <bits/stdc++.h>
using namespace std;
int main () {
	unsigned long long int n,num,tot=0,cont=0;
	cin >> n;
	num = n;
	for (int i = 2; i < sqrt(n); i++){
		if (num%i == 0){
		while (1){
			if (num%i != 0){
				cont++;
				break;
			}	
		  num /= i;
		  }
		}
	}
	if (num > 1)
		cont++;
    
	cout << pow(2,cont) - cont - 1 << endl;
	return 0;
}
