#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,leds=0;
    string num;

    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        getline(cin,num);
        for (unsigned int j=0; j< num.length();j++){
            if (num[j] == '1')
                leds += 2;

            if (num[j] == '2' || num[j] == '3' || num[j] == '5')
                leds += 5;

            if (num[j] == '4')
                leds += 4;

            if (num[j] == '6' || num[j] == '9' || num[j] == '0')
                leds += 6;

            if (num[j] == '7')
                leds += 3;

            if (num[j] == '8')
                leds+=7;
        }

        cout << leds << " leds" << endl;
        leds = 0; num = " ";

    }

    return 0;
}
