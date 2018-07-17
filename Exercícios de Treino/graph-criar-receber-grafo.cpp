#include <bits/stdc++.h>
using namespace std;
int main () {
	 int i,j;
	vector <int> v[5];
	v[0].push_back(0);
	v[1].push_back(0);
	v[2].push_back(0);
	v[3].push_back(0);
	v[4].push_back(0);
	
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			cout << "CONEXAO DE " << i+1<< " " << j+1 << ": ";
			cin >> v[i][j];
		}
	}
	cout << "grafo inicial:"<< endl<<endl;
	for (i = 0; i < 5; i++){
		for (j = 0; j < 5; j++){
			cout << v[i][j] << "\t";	
		}
		cout << endl;
	}
	return 0;
}
