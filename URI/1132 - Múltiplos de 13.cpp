#include <bits/stdc++.h>
using namespace std;
int main(){
	int x,y,maior=0,menor=0;
	unsigned long long int acum=0;
	cin >> x >> y;
	if (x > y){
		maior = x;
		menor = y;
	} else {
		maior = y;
		menor = x;
	}
	for (int i = menor; i <= maior; i++){
		if (i%13 != 0)
			acum += i;
	}
	cout << acum << endl;
	return 0;
}
