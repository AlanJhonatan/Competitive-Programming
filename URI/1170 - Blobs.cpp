#include <bits/stdc++.h>
using namespace std;
int main () {
	int n;
	float c;
	cin >> n;
	while (n--){
		int count=0;
		cin >> c;
		while (c > 1){
			c = c /2;
			count++;
		}
		cout << count <<" dias" << endl;
	}
	return 0;
}
