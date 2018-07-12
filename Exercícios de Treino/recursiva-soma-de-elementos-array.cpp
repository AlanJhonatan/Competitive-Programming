#include <bits/stdc++.h>

using namespace std;

int soma (int vet[5], int pos){
   int a = 0;
   if (pos == -1)
    return 0;

    a += vet[pos];

    return a += soma(vet,pos -1);

}
int main()
{
    int tam = 4, v[] = {1,1,1,1,1};

   cout << soma(v, tam);

    return 0 ;
}
