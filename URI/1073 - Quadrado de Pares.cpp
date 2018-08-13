#include <bits/stdc++.h>
using namespace std;
int main (){
	unsigned long long int n,i,r;
	cin >> n;
	for (i= 2; i <= n; i+=2 ){
		r = pow(i,2);
		cout << i<<"^2 = "<< r << endl;
	}
	return 0;
}
