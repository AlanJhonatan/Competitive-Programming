#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d,a,l,p;
    cin >> d;
    cin >> a >> l >>p ;
    if (d > a || d > l || d >p){
        cout << "N" << endl;
    } else {
        cout << "S" << endl;
    }
    return 0;
}
