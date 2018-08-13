#include <bits/stdc++.h>
using namespace std;
int main (){
	int m,n;
	while (1){
		int maior=0,menor=0,acum=0;
		cin >> m >> n;
			if (m <= 0 || n <= 0)
				return 0;
		if (m > n){
			maior = m;
			menor = n;
		} else {
			maior = n;
			menor = m;
		}
		for (int i = menor; i <= maior ; i++){
			cout << i << " ";
			acum += i;
		}
		cout << "Sum=" << acum << endl;
	}
	
	return 0;
}
