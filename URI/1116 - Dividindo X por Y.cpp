#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	double x,y;
	cin >> n;
	while (n--){
		cin >> x >> y;
		if (y == 0){
			cout << "divisao impossivel" << endl;
		} else {
			double r = x/y;
			cout << fixed << setprecision(1) << r << endl;
		}
	}
	
	return 0;
}
