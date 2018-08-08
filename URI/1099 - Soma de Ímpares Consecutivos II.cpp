#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	int x,y;
	cin >> n;
	while (n--){
		cin >> x >> y;
		int maior =0, menor=0,acum=0;
		if (x >= y){
			maior = x;
			menor = y;
		} else {
			maior = y;
			menor = x;
		}
		for (int i = menor+1; i < maior; i++){
			if (i%2!=0)
				acum+= i;
		}
		cout << acum << endl;
	}
	return 0;
}
