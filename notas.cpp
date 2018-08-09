/*
            ESTUDAR SOBRE:
              *PONTEIROS
              *FIND
              *SORT
              *COMPARE
              *RECURSIVA
*/
// -----------------------------------------------------------------------------------------------------------//

//                -- ORGANIZAR UM VETOR -- 
        sort(numbers.begin(), numbers.end(), greater<int>())
//                                           |-> greater/less. (greater = decrescente, less = ascendente)

		//      OU TAMBÉM
		
	struct greater{
    		template<class T>
    		bool operator()(T const &a, T const &b) const { return a > b; }
	}   ;
		std::sort(numbers.begin(), numbers.end(), greater());

// -----------------------------------------------------------------------------------------------------------//

//                -- RETORNAR A POSIÇÃO DE UM ELEMENTO EM UM VETOR --
           ptrdiff_t pos = distance(VETOR.begin(), find(VETOR.begin(), VETOR.end(), ELEMENTO));
 
                                 if(pos >= VETOR.size())  
//              CHECAGEM: SE O ELEMENTO *NÃO FOR ENCONTRADO* A POSIÇÃO É IGUAL AO TAMANHO
// 		"You need to check pos against VETOR.size() to see if it is out of bounds or not."	
					 
					 
// -----------------------------------------------------------------------------------------------------------//
//						-- INVERTER VETOR -- 
					reverse(VETOR.begin(),VETOR.end());
// -----------------------------------------------------------------------------------------------------------//
//					-- Converter NUMERO para STRING --
					   string s = to_string(VALOR);

//					-- Converter STRING para NUMERO --
						stringstream sst(STRING); 
			//cria-se um objeto do tipo stringstream, passando como parâmetro a string
				
							int b;
						      sst >> b;
					 //E é associado à variável dessa forma.
