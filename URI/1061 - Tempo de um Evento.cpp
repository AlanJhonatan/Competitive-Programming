#include <bits/stdc++.h>
using namespace std;

int main(){
	string x;
	int d1, h1, m1, s1;
	int d2, h2, m2, s2;
	int dr, hr, mr, sr;
	cin >> x >> d1;
	cin >> h1 >> x >> m1 >> x >> s1;
	cin >> x >> d2;
	cin >> h2 >> x >> m2 >> x >> s2;
	
	dr = d2 - d1;
	if(h1 > h2) {
		hr = abs(h2 - h1);
		hr = 24 - hr;
		dr--;
	}
	else {
		hr = h2 - h1;
	}
		
	
	
	mr = m2 - m1;
	sr = s2 - s1;
	
	
	if(sr < 0) {
		if(mr > 0) {
			mr--;
			sr = 60 - abs(sr);
		}
		else {
			if(hr > 0){
				hr--;
				mr += 60;
				mr--;
				sr = 60 - abs(sr);
			}
		}	
	}
	
	printf("%d dia(s)\n", dr);
	printf("%d hora(s)\n", hr);
	printf("%d minuto(s)\n", mr);
	printf("%d segundo(s)\n", sr);
}
