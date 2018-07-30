#include <bits/stdc++.h>
#define  bkl  cout<<endl;
using namespace std;
int main(){
  int n,x,y;
  cin >> n;
  while (n--){
  	int b=0,c=0,r=0;
  	cin >> x >> y;
  	r = (pow(3*x,2)) + (pow(y,2));
  	b = 2 * (pow(x,2)) + (pow(5*y,2));
  	c = (-100 * x)  + pow(y,3);
  if (r >= b && r >= c)
  		cout << "Rafael ganhou" << endl;
  	else if (b >= r && b >= c)
  		cout << "Beto ganhou" << endl;
	else 
		cout << "Carlos ganhou" << endl;
  }	
  return 0;
}
