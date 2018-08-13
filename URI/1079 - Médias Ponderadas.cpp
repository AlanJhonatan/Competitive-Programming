#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	cin >> n;
	double a,b,c;
	while (n--){
		cin >> a >> b >> c;
		double acum = 0,r;
		r = ((a * 2) + (b * 3) + (c *5)) / 10;
		cout << fixed << setprecision(1) << r << endl;	
	}
	return 0;
}
