#include <bits/stdc++.h>

using namespace std;

int main () {
	unsigned long long int n,num,tot=0,cont=0;
	cin >> n;
	num = n;
	map<int,int> M;
	for (int i = 2; i < sqrt(n); i++){
		if (num%i == 0){
		while (1){
			if (num%i != 0){
				M[i]++;
				break;
			}	
		  num /= i;
		  }
		}
		}
	int tam = M.size();
	if (num > 1){
		tam++;
	}
	cout << pow(2,tam) - tam - 1 << endl;
	return 0;
}
