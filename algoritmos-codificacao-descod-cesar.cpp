/*
 *
 *  		Exercicio 2 - Codificar/Decodificar uma criptografia de Cesar 
 * 							Implementar minuscula
 * 
*/
#include <bits/stdc++.h>

using namespace std;

int main () {
	string cesar; 
	int letra = 0, dif = 0;
	int perg;        //   <-------- receber a quantidade de casas para percorrer
	
		/*
		*	while (perg != 1 || perg != 2 || perg != -1){
		*	cout << "O que deseja fazer ?" << endl;
		*	cout << endl;
		*	cout << "1  - Codificar ?" << endl;
		*	cout << "2  - Decodificar ?" << endl;
		*	cout << "-1 - Sair ?" << endl;
		*	cout << endl << ">";
		*	cin >> perg;
		* }
		* 	
		*/
	
	cin >> perg;
	perg = perg%26;  //  <---------- CONVERTE QUALQUER NUMERO AO EQUIVALENTE.   1-26
	cin.ignore();
	
	getline(cin,cesar);
	
	for (unsigned int i = 0; i < cesar.length(); i++){
			
			if (islower(cesar[i])){
				cesar[i] = toupper(cesar[i]);
			}	
			
			if (cesar[i] >= 88){
				dif = abs(cesar[i] - 90) - perg; 
				letra = 65 + (abs(dif) - 1);
			}
			else
			letra = cesar[i]+perg;
			
			cout << static_cast <char> (letra) << endl;  
		}
	
	
	return 0;
}
