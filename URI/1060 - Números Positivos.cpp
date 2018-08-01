#include <bits/stdc++.h>
using namespace std;
int main (){
	int n = 6,c=0;
	float x;
	while (n--){
		cin >> x;
		if (x > 0)
			c++;
	}
	cout << c << " valores positivos" << endl;
	return 0;
}
