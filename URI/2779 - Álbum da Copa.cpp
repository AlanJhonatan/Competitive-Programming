#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,m,x;
	set <int> st;
	cin >> n >> m;
	while (m--){
		cin >> x;
		st.insert(x);
	}
	cout << n - st.size() << endl;
	return 0;
} 
