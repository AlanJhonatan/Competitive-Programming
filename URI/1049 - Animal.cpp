#include <bits/stdc++.h>
using namespace std;
int main (){
	string n1,n2,n3;
	getline(cin,n1);
	getline(cin,n2);
	getline(cin,n3);
	if (n1.compare("vertebrado") == 0){
		if (n2.compare("ave") == 0){
			if (n3.compare("carnivoro") == 0){
				cout << "aguia" << endl;
			}
			if (n3.compare("onivoro") == 0){
				cout << "pomba" << endl;
			}
		}
		if (n2.compare("mamifero") == 0){
			if (n3.compare("onivoro") == 0){
				cout << "homem" << endl;
			}
			if (n3.compare("herbivoro") == 0){
				cout << "vaca" << endl;
			}
		}
	}else if (n1.compare("invertebrado") == 0){
		if (n2.compare("inseto") == 0){
			if (n3.compare("hematofago") == 0){
				cout << "pulga" << endl;
			}
			if (n3.compare("herbivoro") == 0){
				cout << "lagarta" << endl;
			}
		}
		if (n2.compare("anelideo") == 0){
			if (n3.compare("hematofago") == 0){
				cout << "sanguessuga" << endl;
			}
			if (n3.compare("onivoro") == 0){
				cout << "minhoca" << endl;
			}
		}
	}
	return 0;
}
