#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	long long int acum, n; 
	cin >> t;
	for (int i = 0; i < t; i++){
		cin >> n;
		acum = 0;
		for(int j = 1; j < n; j++){
			if(n % j == 0){
				acum += j;
			}
		}
		if(n == acum)
			cout << n << " eh perfeito" << endl;
		else 
			cout << n << " nao eh perfeito" << endl;
	}
}
