#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
    int x=0,y=0,z=0,e=0;
  while(getline(cin,s)){
  e = 0;x=0;y=0;z=0;
	if (static_cast<int>(s.length()) >= 6 && static_cast<int>(s.length()) <= 32){
        for (int i = 0; i<static_cast<int> (s.length()); i++){
            if ((s[i] >= 48 && s[i] <= 57) ||( s[i] >= 65 && s[i] <= 90 )|| (s[i] >= 97 && s[i] <= 122)){
                    if(s[i] >= 48 && s[i] <= 57)
                        x = 1;
                    if(s[i] >= 65 && s[i] <= 90)
                        y = 1;
                    if(s[i] >= 97 && s[i] <= 122)
                        z = 1;
            } else {
                e = 1;
                break;
            }
        }
        if (x == 1 && y == 1 && z == 1 && e==0){
            cout << "Senha valida." << endl;
        } else {
            cout << "Senha invalida." << endl;
        }
	} else {
        cout << "Senha invalida." << endl;
	}
  s.clear();
}
	return 0;
}
