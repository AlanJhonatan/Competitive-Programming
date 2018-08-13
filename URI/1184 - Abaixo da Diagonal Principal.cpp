#include <bits/stdc++.h>
using namespace std;
int main (){
	char c;
	double x,r,count=0;
	double m[12][12];
	
	cin >> c;
	
	for (int i =0; i < 12; i++){
		for (int j = 0; j < 12; j++){
			cin >> x;
			m[i][j] = x;
		}
	}
	
	for (int i =0; i < 12; i++){
		for (int j = 0; j < 12; j++){
			if (j < i){// SE TA
				r += m[i][j];
				count++;	
			}
		}
	}
	cout << fixed << setprecision(1);
	
	if (c == 'S'){
		cout << r << endl;
	} else {
		cout << r / count << endl;
	}
	
	return 0;
}
