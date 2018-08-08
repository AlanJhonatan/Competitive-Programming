#include <bits/stdc++.h>
using namespace std;
int main (){
	int x,y;
	while (1) {
		cin >> x >> y;
		if (x== y){
			return 0;
		}
		
		if (x > y){
			cout << "Decrescente" << endl;
		} else {
			cout << "Crescente" << endl;
		}
	}
	
	return 0;
}
