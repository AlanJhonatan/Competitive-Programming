#include <bits/stdc++.h>
using namespace std;
int main (){
	int t;
	cin >> t;
	int pa,pb;
	double g1,g2;
	int c;
	while (t--){
		c= 0;
		cin >> pa >> pb >> g1 >> g2;
		while (pa - 1 < pb ){
			pa += (pa * g1) / 100; 
			pb += (g2 * pb) / 100;
			c++;
				if (c > 100)
					break;
		}
		if (c <= 100)
			cout << c << " anos." << endl;
		else 
			cout << "Mais de 1 seculo." << endl;
	}
	return 0;
}
