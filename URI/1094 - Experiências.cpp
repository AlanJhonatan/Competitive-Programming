#include <bits/stdc++.h>
using namespace std;
int main (){
	int n,q,acum =0;
	char t;
	cin >> n;
	double c=0,r=0,s=0;
	while (n--){
		cin >> q ;
		acum += q;
		cin.ignore();
		cin >> t;
		if (t == 'C')
			c += q;
		if (t == 'R')
			r += q;
		if (t == 'S')
			s += q; 		
	}
	double tc,tr,ts;
	tc = (c / acum)*100;
	tr = (r / acum)*100;
	ts = (s / acum)*100;
	cout << "Total: "<< acum <<" cobaias" <<endl;
	cout << "Total de coelhos: " << c << endl;
 	cout << "Total de ratos: " << r << endl;
	cout << "Total de sapos: " << s << endl;
	cout << fixed << setprecision(2);
	cout << "Percentual de coelhos: "<<tc <<" %"<< endl;
	cout << "Percentual de ratos: "<< tr << " %" << endl;
	cout << "Percentual de sapos: "<< ts << " %" << endl;
	return 0;
}
