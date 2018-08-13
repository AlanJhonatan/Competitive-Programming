#include <bits/stdc++.h>
using namespace std;
int main (){
	int gi,gg,n;
	int git=0,ggt=0,nt=0,emp=0;
	
	while (1){
	cin >> gi >> gg;
	nt++;
	if (gi > gg)
		git++;
	else if (gi == gg)
		emp++;
	else
		ggt++;
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> n;
		if (n == 2)
			break;
	}
	
	cout << nt << " grenais" <<endl;
	cout << "Inter:" << git <<endl;
	cout << "Gremio:" << ggt << endl;
	cout << "Empates:" << emp << endl;
	if (git > ggt)
		cout<< "Inter venceu mais" <<endl;
	else 
		cout<< "Gremio venceu mais" <<endl;
	
	return 0;
}
