#include <bits/stdc++.h>
using namespace std;
int main (){
	double a,m=0,c=0,x,r=0; 
	while (1) {
		cin >> a ;
		if (a >= 0 && a <= 10){
			m += a;
			c++;
				if (c == 2){
					c=0;
					r=0;
					r = m/2;
					m=0;
					cout << "media = " << fixed << setprecision(2) << r << endl;
					while (1){
					cout << "novo calculo (1-sim 2-nao)" << endl;
					cin >> x;
					if (x == 2)
						return 0;
						if (x == 1)
							break;
					}
				}
		} else {
			cout << "nota invalida" << endl;
		} 	
	}	
	
	return 0;
}
