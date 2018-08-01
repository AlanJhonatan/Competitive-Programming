#include <bits/stdc++.h>
#define bkl cout<<endl;
#define ulli unsigned long long int
using namespace std;
int main() {
	vector <double> v;
	double x;
	int a = 3;
	while (a--){
	cin >> x;
	v.push_back(x);
    }
    sort(v.begin(), v.end(),greater<int>());
    if (v[0] >= v[1] + v[2]){
			cout << "NAO FORMA TRIANGULO"<< endl;
			return 0;
	} else if ( pow(v[0],2) == (pow(v[1],2)) + (pow(v[2],2)) ){
			cout << "TRIANGULO RETANGULO" << endl;
	} else if (pow(v[0],2) > (pow(v[1],2)) +(pow (v[2],2))){
		cout << "TRIANGULO OBTUSANGULO" << endl;
	} else if (pow(v[0],2) < pow(v[1],2) + pow(v[2],2)){
		cout << "TRIANGULO ACUTANGULO" << endl;
	}
	if (v[0] == v[1] && v[1] == v[2]){
		cout << "TRIANGULO EQUILATERO" << endl;
	} else if ((v[0] == v[1] && v[0] != v[2]) || (v[2] == v[1] && v[2] != v[0]) || (v[0] == v[2] && v[0] != v[1])) {
		cout << "TRIANGULO ISOSCELES" << endl;
	}
	return 0;
}
