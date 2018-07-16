//
//  Passa nos casos de teste, porém da time limit.
//
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, tammax = 0;
    string p;
    vector <string> str;

    while (1){
        cin >> n;
        if (n == 0){
            return 0;
        }
        cin.ignore();
        for (int i = 0; i < n; i++){
            getline(cin, p);
            p.erase(remove(p.begin(), p.end(), ' '), p.end()); //PESQUISAR SOBRE REMOVE/ERASE.
            str.push_back(p);
            if (tammax < static_cast<int>(p.length())) {
                tammax = p.length();
            }
        }
        for (int i = 0; i < static_cast <int> (str.size()); i++){
            if (static_cast <int> (str[i].length())< tammax){
                for (int j = 0; j < tammax - static_cast <int> (str[i].length()); j++){
                    cout << " ";
                }
            }
            cout << str[i] << endl;
        }
        cout << endl;
    }

    return 0;
}
