#include <bits/stdc++.h>
using namespace std;
int main (){
	double s = 1,c=2;
	for (double i = 3; i <= 39; i += 2){
		s += i/c;
		c *= 2;
	}
	cout << fixed << setprecision (2) << s << endl;
	return 0;
}
