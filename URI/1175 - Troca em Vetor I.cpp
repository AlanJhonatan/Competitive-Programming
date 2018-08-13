#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	vector <int> v;
	
	for (int i =0; i < 20; i++){
		cin >> n;
		v.push_back(n);
	}
	reverse(v.begin(),v.end());
	for(int i =0; i < 20; i++){
		cout << "N[" << i << "] = " << v[i] << endl;
	}
	
	return 0;
}
