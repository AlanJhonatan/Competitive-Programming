#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,x,y;
	cin >> n;
	while (n--){
		cin >> x >> y;
		int c=0,acum=0;
		while (c != y){
			if (x%2 != 0){
				acum += x;
				c++;
			}
			x++;		
		}
		cout << acum << endl;
	} 
	return 0;
}
