#include <bits/stdc++.h>
using namespace std;
int main(){
  int n, a,b,ac=0,bc=0;
  while (1){
  cin >> n;
  if (n == 0)
  		break;
	for (int i = 0 ; i < n ; i++){
  	cin >> a >> b;
  	if (a > b){
	  	ac++;
	} else if (b > a){
		bc++;
	} 
	}
  cout << ac <<  " " << bc << endl;
  ac=0;bc=0;
}
  return 0;
}
