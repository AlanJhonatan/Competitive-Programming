#include <bits/stdc++.h>
using namespace std;
int main()
{
	int no,de=0,para=0;
	cout << "Quantidade de nos: ";
	cin >> no;
	cout << endl;
	vector <int> m[no];
	
	for (int i = 0; i < no; i++){
			m[i].push_back(0);
	}
	
	while(1){
		cout << "caminho DE - PARA (int int):"	;
		cin >> de >> para;
		if (de == -1 && para == -1)
			break;
		m[de-1][para-1] = 1;
	}
	
	for (int i = 0; i < m.size(); i++){
		for (int j = 0; j <m.size(); j++){
			cout << m[i][j] << "\t";
		}
		cout << endl;
	}
    return 0;
}
