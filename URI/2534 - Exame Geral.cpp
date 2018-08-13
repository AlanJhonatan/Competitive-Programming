#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,q,x;
	while (cin >> n >> q){
		vector <int> v;
		while(n--){
		cin >> x;
		v.push_back(x);
		}
		sort(v.begin(), v.end(), greater<int>());
		while (q--){
			cin >> x;
			cout << v[x-1] << endl;
		}
	}
	
	return 0;
}
