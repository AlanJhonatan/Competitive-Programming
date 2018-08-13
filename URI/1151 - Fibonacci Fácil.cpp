#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	vector <int> v;
	v.push_back(0);
	v.push_back(1);
	cin >> n;
	if (n == 0){
		cout << "0" << endl;
	} else if (n == 1){
		cout << "0 1" << endl;
	} else {
		for (int i = 2; i < n; i++){
			v.push_back(v[i-1] + v[i - 2]);
		}
		for (int j = 0; j < v.size()-1; j++){
			cout << v[j] << " ";
		}
		int size = static_cast <int> (v.size());
		cout << v[size-1] << endl; 
	}
	
	return 0;
}
