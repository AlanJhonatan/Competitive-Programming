#include <bits/stdc++.h>
#define bkl cout<<endl;
#define ulli unsigned long long int
using namespace std;
int main() {
	double d;
	cin >> d;
	if (d >= 0 && d <= 25){
		cout << "Intervalo [0,25]" << endl;
    } else if (d > 25 && d <= 50){
		cout << "Intervalo (25,50]" << endl;
	} else if (d > 50 && d <= 75){
		cout << "Intervalo (50,75]" << endl;
	} else if (d > 75 && d <= 100){
		cout << "Intervalo (75,100]" << endl;
	} else {
		cout << "Fora de intervalo" << endl;
	}
	return 0;	
}
