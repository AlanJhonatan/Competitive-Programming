#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,x,menor=0;
	cin >> n;
	vector <int> v;
	for(int i = 0; i < n; i++){
		cin >> x;
		if (x < menor)
			menor = x;
		v.push_back(x);
	}
	
	ptrdiff_t pos = distance(v.begin(), find(v.begin(), v.end(), menor));
	
	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << pos << endl;
	return 0;
}
