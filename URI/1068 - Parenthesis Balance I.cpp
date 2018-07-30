#include <bits/stdc++.h>
#define  bkl  cout<<endl;
using namespace std;
int main(){
  string s;
  while (getline(cin,s)){
  	int pf=0,pa=0;
  	for (unsigned int i = 0; i < s.size(); i++){
		if (s[i] == ')')
  		    pf++;
  		if (pf > pa)
  			break;
  		if (s[i] == '(')
  			pa++;
  	}
  	if (pf == pa){
  		cout << "correct" << endl;
	} else {
		cout << "incorrect" << endl;
	}
  	s.clear();
  }
  return 0;
}
