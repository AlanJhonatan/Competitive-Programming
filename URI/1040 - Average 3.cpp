#include <bits/stdc++.h>
#define bkl cout<<endl;
#define ulli unsigned long long int
using namespace std;
int main() {
	double n1,n2,n3,n4,mp,ne=0;
	cin >> n1>> n2>> n3 >> n4;
	mp = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10;
	cout << fixed << setprecision(1);
	cout << "Media: " <<mp << endl;
	if (mp >= 7.0){
		cout << "Aluno aprovado." << endl;
	}else if (mp >= 5.0 && mp <= 6.9){
		cout << "Aluno em exame." << endl;
		ne =1;
	} else {
		cout << "Aluno reprovado." << endl;
	}
	if (ne == 1){
	cin >> ne;
	cout << "Nota do exame: " << ne << endl;
	ne = (ne + mp)/2;
	if (ne >= 5.00)
		cout << "Aluno aprovado." << endl;
	else 
		cout << "Aluno reprovado." << endl;
		
	cout << "Media final: " << ne << endl;
	}
	return 0;
}
