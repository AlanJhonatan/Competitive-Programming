#include <bits/stdc++.h>
using namespace std;
int main () {
	int t;
	cin >> t;
	cin.ignore();	
	while (t--){
		string a,b;
		int p=0;
		cin >> a;
		cin >> b;
		int tam_a = a.length();
		int tam_b = b.length();
		if (tam_a >= tam_b){
		for (int i = 1; i < static_cast <int> (b.length())+1; i++){
			if (a[tam_a-i] == b[tam_b-i])
				p++;
			}	
		}
		if (p == b.length())
			cout << "encaixa" << endl;
			else 
			cout << "nao encaixa" << endl;
	}
	return 0;
}
