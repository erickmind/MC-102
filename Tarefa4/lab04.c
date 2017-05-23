#include <stdio.h> // Nesse programa, o objetivo eh indicar se eh possivel organizar quatro caixas de forma a a equilibrar o peso de seus conteudos em duas pilhas de mesmo peso dentro de uma nave. Erick Kussumoto do Nascimento 196492
int main(){
	int c1, c2, c3, c4;
	scanf("%d %d %d %d", &c1, &c2, &c3, &c4);
	if(c1 + c2 == c3 + c4 || c1 + c3 == c2 + c4 || c1 + c4 == c2 + c3 || c1 == c2 + c3 + c4 || c2 == c1 + c3 + c4 || c3 == c1 + c2 + c4 || c4 == c1 + c2 + c3 ){ // Todas as possibilidades possiveis de organizacao das caixas em duas pilhas, de forma a distribuir os pesos igualmente
		printf("sim\n"); // Indicacao de que eh possivel organizar as caixas em duas pilhas
	}else{
		printf("nao\n"); // Indicacao de que nao eh possivel organizar as caixas em duas pilhas
	}
	
	return 0;
}

