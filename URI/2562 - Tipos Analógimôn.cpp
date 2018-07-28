#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,m,de,para,e,atual;
	while (cin >> n >> m) {
		vector <int> la[n];
		vector <int> visitados;
		queue <int> q;
		for (int i = 0; i < m; i++){
				cin >> de >> para;
				la[de-1].push_back(para-1);
		}
		cin >> e;
		q.push(e-1);
		while (! q.empty()){
			atual = q.front();
			if (find(visitados.begin(), visitados.end(),atual)!=visitados.end()){
			q.pop();
		} else {
			for (unsigned int i =0; i < la[atual].size();i++){
				q.push(la[atual][i]);
			}
			visitados.push_back(q.front());
			q.pop();
		}
		}
		cout << visitados.size() << endl;
	}
	return 0;
}
