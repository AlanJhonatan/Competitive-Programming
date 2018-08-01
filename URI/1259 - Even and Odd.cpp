#include <bits/stdc++.h>
#define  bkl  cout<<endl;
using namespace std;
int main(){
  int n,x;
  cin >> n;
  vector <int> par;
  vector <int> impar;
  while (n--){
  	cin >> x;
  	if (x%2 == 0)
  		par.push_back(x);
  	else 
  		impar.push_back(x);
  }
  sort(par.begin(), par.end(), less<int>());
  sort(impar.begin(), impar.end(), greater<int>());
  for (unsigned int i = 0; i < par.size(); i++){
  	cout << par[i] <<endl;
  }
  for (unsigned int i = 0; i < impar.size(); i++){
  	cout << impar[i] <<endl;
  }
  return 0;
}
