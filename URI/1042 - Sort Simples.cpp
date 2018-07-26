#include <bits/stdc++.h>
using namespace std;
int main()
{
    int v[3], v2[3];
    cin >> v[0];
    cin >> v[1];
    cin >> v[2];
    for (int i = 0; i < 3; i++) {
        v2[i] = v[i];
    }
    sort(v, v+3, less <int>());
    for (int i = 0; i < 3; i++) {
        cout << v[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << v2[i] << endl;
    }
    return 0 ;
}
