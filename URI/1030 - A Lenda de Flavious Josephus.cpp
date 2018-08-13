#include <bits/stdc++.h>
using namespace std;
int main (){
	int nc;
	cin >> nc;
	int n,k,aux,c=1;
	while (nc--){
		queue <int> q;
		cin >> n >> k;
		for (int i = 1; i <= n; i++){
			q.push(i);
		}
		while (not q.empty()){
			for (int i = 0; i < k -1 ; i++){
				aux = q.front();
				q.pop();
				q.push(aux);	
			}
			aux = q.front();
			q.pop();
		}
		cout << "Case " << c << ": "<< aux << endl;
		c++;
	}
	return 0;
}
