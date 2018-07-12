#include <bits/stdc++.h>

using namespace std;

int soma (int tam, vector <int> a) {
    int acum = 0;
    if (tam == -1)
        return acum;

    acum += a[tam];


    return acum += soma (tam -1, a);


}

int main()
{
    vector <int> v (100,2);
    int t;
    t = v.size()-1;

    cout << soma(t, v);


    return 0 ;
}
