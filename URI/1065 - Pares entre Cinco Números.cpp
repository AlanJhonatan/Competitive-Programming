#include <bits/stdc++.h>
using namespace std;
int main (){
	int x,a = 5,c=0;
	while (a--){
		cin >> x;
		if (x%2==0)
			c++;
	}
	cout << c << " valores pares" << endl;
}
