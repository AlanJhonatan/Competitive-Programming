#include <bits/stdc++.h>
#define  bkl  cout<<endl;
using namespace std;
int main(){
 int n,a,b,c,d,e;
 while (1){
	cin >> n;
	if (n == 0)
		break;
	while (n--){
		cin >> a >> b >> c >> d >> e;
		 int ra=0,rb=0,rc=0,rd=0,re=0;
	if (a <= 127)
		ra++;
		
	if (b <= 127)
		rb++;
		
	if (c <= 127)
		rc++;
		
	if (d <= 127)
		rd++;
		
	if (e <= 127)
		re++;	
	if (ra + rb + rc + rd + re != 1){
		cout << "*" << endl;
	} else {
		if (ra == 1){
			cout << "A" << endl;
		} else if (rb == 1){
			cout << "B" << endl;
		} else if (rc == 1){
			cout << "C" << endl;
		} else if (rd == 1){
			cout << "D" << endl;
		} else if (re == 1){
			cout << "E" << endl;
		}
	}	
}
}
	return 0;
}
