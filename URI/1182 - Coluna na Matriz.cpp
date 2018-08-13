#include <bits/stdc++.h>
using namespace std;
int main (){
	int l;
	char t;
	double m[12][12], x;
	
	cin >> l;
	cin.ignore();
	cin >> t;
	
	for (int i =0; i < 12; i++){
		for (int j =0; j < 12; j++){
			cin >> x;
			m[i][j] = x;
		}
	}
	
	if (t == 'S'){
		double acum=0;
		for (int i = 0; i < 12; i++){
			acum += m[i][l];
		}
		cout << fixed << setprecision(1) << acum << endl;
	} else {
		double acum = 0;
		for (int i = 0; i < 12; i++){
			acum += m[i][l];
		}
		acum = acum /12;
		cout << fixed << setprecision(1) << acum << endl;
	}
	
	return 0;
}
