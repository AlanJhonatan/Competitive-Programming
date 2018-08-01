#include <bits/stdc++.h>
#define bkl cout<<endl;
#define ulli unsigned long long int
using namespace std;
int main() {
	int a,b;
	cin >> a >> b;
	
	if (a == b){
	 cout << "O JOGO DUROU 24 HORA(S)" << endl;
	} else if (a > b){
	 cout << "O JOGO DUROU " << abs((a - b) - 24) << " HORA(S)" << endl;
	} else {
		cout << "O JOGO DUROU " << abs(a - b) << " HORA(S)" << endl;
	}
	return 0;
}
