//ARRUMAR OS N CASOS DE TESTES, E TRATAR O ESPAÇO.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, tam=0;
    string c;
    vector <string> s;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++){
        getline(cin,c);
        s.push_back(c);

        if (tam < static_cast <int> (c.size())){
            tam = c.size();
        }
    }
    for (int i = 0; i < n; i++){

        if (static_cast<int>(s[i].length()) < tam){
            for (int j = 0; j < static_cast <int> (tam - s[i].size()); j++) {
                cout<< " ";
            }
            cout << s[i]<<endl;
            } else
            cout << s[i]<<endl;
    }


    return 0;
}
