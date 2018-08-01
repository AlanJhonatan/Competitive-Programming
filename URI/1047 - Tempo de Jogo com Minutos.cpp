#include <bits/stdc++.h>
using namespace std;
int main (){
	int hi,mi,hf,mf,h,m;
	cin >> hi>> mi >>hf>> mf;
	if (hi == hf && mi == mf){
		cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
		return 0 ;
	} 
	h = hi - hf;
	if (h > 0){
		h = 23 - h;
	}
	m = mi - mf;
	if (m > 0){
		m =	 60 - abs(m);
	}
	if (abs(hi - hf) == 1 && mi > mf)
		h = 0;
	cout << "O JOGO DUROU "<< abs(h) <<" HORA(S) E "<< abs(m) <<" MINUTO(S)" << endl;
	return 0;
}
