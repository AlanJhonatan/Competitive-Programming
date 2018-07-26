#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, e=0;
    while(cin >> n){
    for (int i = 0; i < (n/2) + 1; i++){
        cout <<  setw((n/2)-i+1) << "*";
        for (int j=0;j<e;j++){
            cout <<"*";
        }
        cout <<endl;
        e+=2;
    }
    cout <<  setw((n/2)+1) << "*" << endl;
    cout <<  setw((n/2)+2) << "***" << endl;
    cout << endl;
    n=0;e=0;
    }
    return 0;
}
