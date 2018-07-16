#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string p;
    int one=0 , two=0;
    cin >> n;
    cin.ignore();
    for (int i= 0; i < n; i++){
        cin >> p;
        if (p.length() == 5){
            cout << "3" << endl;
        } else{
            if (p[0] == 'o')
                one++;
            if (p[1] == 'n')
                one++;
            if (p[2] == 'e')
                one++;
            if (p[0] == 't')
                two++;
            if (p[1] == 'w')
                two++;
            if (p[2] == 'o')
                two++;

            if (one > two)
                cout << "1" << endl;
             else
                cout << "2" << endl;
        }
        one =0; two = 0;
    }
    return 0;
}

