#include <bits/stdc++.h>
using namespace std;
int main (){
	int i = 1,aux = 0,j = 7;
	while (1) {
		cout << "I="<<i<<" J=" <<j << endl;
		aux++;
		j--;
		if (aux == 3){
			i += 2;
		}
		if (aux == 3 && i == 11){
			return 0;
		}
		if (aux == 3){
			aux = 0;
		}
		if (j == 4){
			j=7;
		}
	}
	return 0;
}
