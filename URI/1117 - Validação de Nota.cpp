#include <bits/stdc++.h>
using namespace std;
int main () {
	float x,acum=0;
	int nv = 0;
	while (1){
		cin >> x;
		if (x >= 0 && x <= 10){
			nv++;
			acum += x;
			if (nv == 2){
				float r = acum /2;
				cout << "media = " << r << endl;
				return 0;
			}
		}else{
			cout << "nota invalida" <<endl;
		}
	}	
	return 0;
}
