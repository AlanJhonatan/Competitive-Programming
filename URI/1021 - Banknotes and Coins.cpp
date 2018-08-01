#include <bits/stdc++.h>
#define  bkl  cout<<endl;
using namespace std;
int main(){
  double f;
  vector <int> n (12,0);
  cin >> f;
  while (f > 99.9999){
  	n[0]++;
  	f -= 100;
  }
  while (f > 49.9999){
  	n[1]++;
  	f -= 50;
  }
  
  while (f > 19.9999){
  	n[2]++;
  	f -= 20;
  }
  while (f > 9.999){
  	n[3]++;
  	f -= 10;
  }while (f > 4.999){
  	n[4]++;
  	f -= 5;
  }
  while (f > 1.999){
  	n[5]++;
  	f -= 2;
  }
  while (f > 0.9999){
  	n[6]++;
  	f -= 1;
  }
  while (f > 0.49999){
  	n[7]++;
  	f -= 0.50;
  }
  while (f > 0.24999){
  	n[8]++;
  	f -= 0.25;
  }
  while (f > 0.09999){
  	n[9]++;
  	f -= 0.10;
  }
  while (f >= 0.04999){
  	n[10]++;
  	f -= 0.05;
  }
 while (f >= 0.00999){
  	n[11]++;
  	f -= 0.01;
  } 
cout << "NOTAS:" << endl; 
cout << n[0] << " nota(s) de R$ 100.00"  << endl;
cout << n[1] << " nota(s) de R$ 50.00"   << endl;
cout << n[2] << " nota(s) de R$ 20.00"   << endl;
cout << n[3] << " nota(s) de R$ 10.00"   << endl;
cout << n[4] << " nota(s) de R$ 5.00"    << endl;
cout << n[5] << " nota(s) de R$ 2.00"    << endl;
cout << "MOEDAS:" <<endl;
cout << n[6]  << " moeda(s) de R$ 1.00" << endl;
cout << n[7]  << " moeda(s) de R$ 0.50" << endl;
cout << n[8]  << " moeda(s) de R$ 0.25" << endl;
cout << n[9]  << " moeda(s) de R$ 0.10" << endl;
cout << n[10] << " moeda(s) de R$ 0.05" << endl;
cout << n[11] << " moeda(s) de R$ 0.01" << endl;
  return 0;
}
