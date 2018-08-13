#include <bits/stdc++.h>
using namespace std;
int main (){
	
	int i,j,vo = 7 ,vf = 5;
	
	for (i = 1; i <= 9; i+=2){
		for (j = vo; j >= vf; j--){
			cout << "I=" << i << " J=" << j << endl;
		}
		vo+=2;
		vf+=2;
	}
	
	return 0;
}
