#include <stdio.h> // O objetivo desse programa é descobrir quais postos serao abastecidos pelo caminhao de acordo com a quantidade de gasolina disponivel e a quantidade necessaria para cada posto. Erick Kussumoto do Nascimento 196492
int main(){
	float d, h, a, b, c;
	scanf("%f %f %f %f %f", &d, &h, &a, &b, &c);
	
	if(3.14 * (d/2) * (d/2) * h * 1000 >= a){
		printf("posto A foi reabastecido\n");	
		if((3.14  * (d/2) * (d/2) * h * 1000) - a >= b){
			printf("posto B foi reabastecido\n");
			if((3.14 * (d/2) * (d/2) * h * 1000) - (a + b) >= c){
				printf("posto C foi reabastecido\n"); // Possibilidade se for possivel reabastecer em todos os postos
			}else{
				printf("posto C nao foi reabastecido\n"); // Possibilidade se nao for possivel reabastecer somente o posto 3
			} 

		}else{
			printf("posto B nao foi reabastecido\n");
			if((3.14 * (d/2) * (d/2) * h * 1000) - a >= c){
				printf("posto C foi reabastecido\n"); // Possibilidade se nao for possivel reabastecer somente o posto 2
			}else{
				printf("posto C nao foi reabastecido\n"); // Possibilidade se for possivel reabastecer somente o posto 1
			}
		}
	
	}else{
		printf("posto A nao foi reabastecido\n");
		if(3.14 * (d/2) * (d/2) * h * 1000 >= b){
			printf("posto B foi reabastecido\n");
			if((3.14 * (d/2) * (d/2) *h * 1000) - b >= c){
				printf("posto C foi reabastecido\n"); // Possibilidade se nao for possivel reabastecer somente o posto 1
			}else{
				printf("posto C nao foi reabastecido\n"); // Possibilidade se for possivel reabastecer somente o posto 2
			}
		}else{
			printf("posto B nao foi reabastecido\n");
			if(3.14 * (d/2) * (d/2) *h * 1000 >= c){
 				printf("posto C foi reabastecido\n"); // Possibilidade se for possivel reabastecer somente o posto 3
			}else{
				printf("posto C nao foi reabastecido\n"); // Possibilidade se nao for possivel reabastecer nenhum dos postos
			}
		}
	}

	return 0;
	
}


	
	
