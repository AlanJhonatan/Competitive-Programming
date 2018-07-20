#include <bits/stdc++.h>
using namespace std;
int main()
{
	int no,de=0,para=0;
	cout << "Quantidade de nos: ";
	cin >> no;
	cout << endl;
	vector <int> m[no];
	
	while(1){
		cout << "caminho DE - PARA (int int):"	;
		cin >> de >> para;
		if (de == -1 && para == -1)
			break;
		m[de-1].push_back(para);
	}
	for(int i=0;i<no;i++)
	{
		cout << "NO " << i+1 << ": ";
		for(unsigned int j = 0; j<m[i].size();j++)
		{
			cout << m[i][j] << "  ";
		}
		cout << endl;
	}
    return 0;
}
