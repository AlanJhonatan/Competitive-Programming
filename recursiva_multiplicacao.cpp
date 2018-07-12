#include <bits/stdc++.h>

using namespace std;
int mut (int num, int vzs){
    if (vzs == 0)
        return 0;

    return num + mut(num, vzs - 1);
}
int main()
{
    int a, b;

    cin >> a;
    cin >> b;


    cout << mut(a,b);


    return 0 ;
}
