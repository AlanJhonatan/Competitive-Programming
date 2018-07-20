#include <bits/stdc++.h>

using namespace std;

int main()
{
	int nos,de,para,i,j,inicio,proc,atual,e = 0;
	vector <int> v;
	cout << "nos do grafo: ";
	cin >> nos;
	vector <int> m[nos];
	while(1){
		cout << "insira o no, e seu vizinho(int int): ";
		cin >> de >> para;
			if (de == -1 && para == -1)
				break;
		m[de].push_back(para);
	}
	//COMEÇA A BFS
	queue <int> Q;
	cout << "Quer comecar por qual elemento ?: ";
	cin >> inicio;
	cout << "Esta a procura de qual elemento ?: ";
	cin >> proc;
	Q.push(inicio);
	while (! Q.empty()){
		atual = Q.front();
		cout << " 					O ATUAL AGORA EH O " << atual << endl;
		for (i = 0; i < m[atual].size(); i++){
			Q.push(m[atual][i]);
			if (m[atual][i] == proc){
				cout << "!!! ENCONTREI O " << proc<< " AQUI!!!!" << endl;
				e = 1;
			}
			cout << " 			JOGUEI O " << m[atual][i] <<  " NA FILA" << endl;
		}
		v.push_back(Q.front());
		cout << " 					O ELEMENTO " << Q.front() << " JA FOI VISITADO E EXCLUIDO DA FILA"  << endl;
		Q.pop();
		if (e == 1){
			break;
		}
	}
	cout << endl;
	cout << " ELEMENTOS VISITADOS:";
	for (int k = 0; k<v.size(); k++){
		cout << v[k] << "  " ;
	}
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "Lista de Adjacencia:" << endl;
	for (i=0; i<nos; i++){
		cout << "NO " << i << ": "; 
		for (j=0; j<m[i].size(); j++){
			cout << m[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}
