#include <bits/stdc++.h>
#define  bkl  cout<<endl;
using namespace std;
int main(){
  int n,t,x;
  cin >> t;
  while (t--){
  	vector <int> v;
  	int sw = 0,temp;
  	cin >> n;
  		while (n--){
	  		cin >> x;
	  		v.push_back(x);
		} 
	for (unsigned int i = 0; i < v.size(); i++){
		if(v[i] > v[i+1] && i != static_cast <int> (v.size())-1){
			sw++;
			temp = v[i];
			v[i] = v[i+1];
			v[i+1] = temp;
			i = -1;
		}
	}
	cout <<"Optimal train swapping takes " << sw <<" swaps."<<  endl;	  	
  }
  return 0;
}
