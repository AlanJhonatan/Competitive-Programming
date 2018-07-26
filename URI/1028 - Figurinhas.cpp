#include <bits/stdc++.h>
using namespace std;
int mdc(int a, int b){
	if (b==0)
		return a;
	return mdc(b,a%b);
}
int main (){
	int n,f1,f2;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> f1 >> f2;
		cout << mdc(f1,f2) << endl;
	}
	return 0;
}
