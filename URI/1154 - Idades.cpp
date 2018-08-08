#include <bits/stdc++.h>

using namespace std;
int main () {
	int id;
	float acum=0,n=0;
	while (1){
	cin >> id;
		if (id < 0)
			break;
	n++;
	acum += id;		
	}
	double r = acum / n;
	cout << fixed << setprecision(2) << r << endl;
	return 0;
}
