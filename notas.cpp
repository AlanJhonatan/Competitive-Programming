/*
            ESTUDAR SOBRE:
              *PONTEIROS
              *FIND
              *SORT
              *COMPARE
              *RECURSIVA
*/


//                  -- to sort a vector -- 
        sort(numbers.begin(), numbers.end(), greater<int>())
//                                           |-> greater/less. (greater = decrescente, less = ascendente)


//                -- RETORNAR A POSIÇÃO DE UM ELEMENTO EM UM VETOR --
           ptrdiff_t pos = distance(VETOR.begin(), find(VETOR.begin(), VETOR.end(), ELEMENTO));
 
                                 if(pos >= VETOR.size())  
//              CHECAGEM: SE O ELEMENTO *NÃO FOR ENCONTRADO* A POSIÇÃO É IGUAL AO TAMANHO
		
