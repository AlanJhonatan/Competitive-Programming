#include <bits/stdc++.h>
using namespace std;
int main () {
	int n,c,m,x,tam;
	vector <int> cb;
	set <int> comp;
	cin >> n>> c >> m;
	while (c--){
		cin >> x;
		cb.push_back(x);
	}
	while (m--){
		cin >> x;
		comp.insert(x);
	}
	tam = cb.size();
	for (int i = 0; i < cb.size(); i++){
		if (find(comp.begin(), comp.end(),cb[i])!=comp.end())
			tam--;	
	}
	cout << tam << endl;
	return 0;
} 
