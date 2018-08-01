#include <bits/stdc++.h>
using namespace std;
int main (){
	int n = 6, c=0;
	float r,x;
	while (n--){
		cin >> x;
		if (x > 0){
			c++;
			r += x;
		}
	}
	r = r /c;
	
	cout << c << " valores positivos" << endl;
	cout << fixed << setprecision(1);
	cout << r << endl;
	return 0;
}
