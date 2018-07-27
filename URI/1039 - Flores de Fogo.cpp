#include <bits/stdc++.h>
using namespace std;
int main () {
	int r1,r2,x1,x2,y1,y2;
	float d =0;
	while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2){ 
		d = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
        if(r1 >= d+r2) 
			cout << "RICO" << endl;
        	else 
			cout << "MORTO" << endl;
	}
	return 0;
}
