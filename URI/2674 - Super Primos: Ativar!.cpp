#include <bits/stdc++.h>
using namespace std;
int main (){
	int x;
	while (cin >> x){
		int c=0,sp=0;
		for (int i = 2; i <= sqrt(x); i++){
			if (x%i == 0){
				c = 1;
				break;
			}
		}
		if (c == 1 || x == 1){
			cout << "Nada" << endl;
		} else{
			string s = to_string(x);
			for (int i = 0; i < s.size(); i++){
				if (s[i] != '2' && s[i] != '3' && s[i] != '5' && s[i] != '7')
					sp = 1;
			}
			
			if (sp == 1)
				cout << "Primo"<< endl;
			else 
				cout << "Super" << endl;
		}	
	}
	
	return 0;
}
