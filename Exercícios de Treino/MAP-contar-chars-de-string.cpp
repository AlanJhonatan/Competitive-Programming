#include <bits/stdc++.h>

using namespace std;

int main () {
	
	string t;
	getline(cin, t);
	
	map<char, int> M;
	
	for (unsigned int i = 0; i < t.length(); i++) {
		/* if (M.find(t[i]) == M.end())    -- CHECAGEM SE O MAP JA EXISTE -- 
		*	{
		*	M[t[i]] = 1;
		*	}
		* else
		* 							
		*/  
		M[t[i]]++;		   				   // O MAP SE AUTOINICIA E INCREMENTA.
	}
	
	cout << endl;
	cout << "------------- QUANTIDADES -------------"<< endl;
	
	for (auto it = M.begin(); it != M.end(); it++ )
			cout <<  it -> first << " --------- " << it -> second << endl;	
	return 0;
}
