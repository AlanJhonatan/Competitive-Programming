#include <bits/stdc++.h>
using namespace std;
int fatorial(int num,int fat){
	if (fat == 1)
		return 1;
	return fat * fatorial(num, fat - 1);	
}
int main()
{	
	int n,f;
	cin >> n;
	f = n;
	cout << fatorial(n,f) << endl;
	return 0;
}
