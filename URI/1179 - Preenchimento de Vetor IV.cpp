#include <bits/stdc++.h>
using namespace std;
int main (){
	int n;
	vector <int> par;
	vector <int> impar;
	for (int i = 0; i < 15; i++){
		cin >> n;
		if (n%2 == 0)
			par.push_back(n);
		else 
			impar.push_back(n);
			
		if (par.size() == 5){
			for (int j = 0; j < 5; j++){
				cout << "par[" <<j <<"] = " << par[j] << endl;
			}
			par.clear();
		} else if (impar.size() == 5){ 
			for (int j = 0; j < 5; j++){
				cout << "impar[" <<j <<"] = " << impar[j] << endl;
			}
			impar.clear();
		}
	}
	for (int j = 0; j < impar.size(); j++){
		cout << "impar[" <<j <<"] = " << impar[j] << endl;
	}
	impar.clear();
	for (int j = 0; j < par.size(); j++){
		cout << "par[" <<j <<"] = " << par[j] << endl;
	}
	par.clear();
	return 0;
}
