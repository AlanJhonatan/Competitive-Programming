#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, num,acum=0;
    cin >> n;

    for (int i=0; i<n ; i++){
        cin >> num;
        acum += num;
    }
    cout << acum << endl;
    return 0;
}
