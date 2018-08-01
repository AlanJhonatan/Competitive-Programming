#include <bits/stdc++.h>
#define  bkl  cout<<endl;
using namespace std;
int main(){
  int n,q,c=0,x,f;
  while (1){
  	vector <int> m;
  	c++;
	cin >> n >> q;
	if (n == 0 && q == 0)
		return 0;
	while (n--){
		cin >> x;
		m.push_back(x);
	}
	sort(m.begin(), m.end(), less <int>());
	cout << "CASE# " << c << ":" << endl;
	while (q--){
		cin >> x;
		ptrdiff_t pos = distance(m.begin(), find(m.begin(), m.end(), x));
		if(pos >= m.size()) {
    		cout << x <<" not found" << endl;
		} else {
		cout << x << " found at " << pos+1 << endl; 
		}
	}
  }  	
  return 0;
}
