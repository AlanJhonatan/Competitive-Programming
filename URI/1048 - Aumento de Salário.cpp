#include <bits/stdc++.h>
using namespace std;
int main (){
	double sal,rg;
	cin >> sal;
	cout << fixed << setprecision(2);
	if (sal >= 0 && sal <= 400){
		rg = (sal * 15) / 100;
		cout <<"Novo salario: " << sal+ rg << endl;
		cout <<"Reajuste ganho: " << rg <<endl;
		cout <<"Em percentual: 15 %" << endl;
	} else if (sal > 400 && sal <= 800){
		rg = (sal * 12) / 100;
		cout <<"Novo salario: " << sal+ rg << endl;
		cout <<"Reajuste ganho: " <<  rg <<endl;
		cout <<"Em percentual: 12 %" << endl;
	} else if (sal > 800 && sal <= 1200){
		rg = (sal * 10) / 100;
		cout <<"Novo salario: " << sal+ rg << endl;
		cout <<"Reajuste ganho: " <<  rg <<endl;
		cout <<"Em percentual: 10 %" << endl;
	} else if (sal > 1200 && sal <= 2000){
		rg = (sal * 7) / 100;
		cout <<"Novo salario: " << sal+ rg << endl;
		cout <<"Reajuste ganho: " <<  rg <<endl;
		cout <<"Em percentual: 7 %" << endl;
	} else {
		rg = (sal * 4) / 100;
		cout <<"Novo salario: " << sal+ rg << endl;
		cout <<"Reajuste ganho: " << rg << endl;
		cout <<"Em percentual: 4 %" << endl;
	}
	return 0;
}
