#include <stdio.h> // O objetivo desse programa eh avaliar a capacidade de um estacionamento de acordo com o tamanho dos veiculos que entram. Em seguida o programa reproduzira uma mensagem que indicara a entrada, a saida ou se nao eh possivel a entrada do veiculo. Erick Kussumoto do Nascimento 196492
int main(){
	int C, a, CAPACIDADE, i;
	scanf("%d", &C);
	CAPACIDADE = C;
	for(i=0; i >= 0; i++){
		scanf("%d", &a);
		if(a > 0){
			if(CAPACIDADE - a >= 0){
				CAPACIDADE = CAPACIDADE - a;
				printf("Seja bem-vindo! Capacidade restante: %d\n", CAPACIDADE);	
			}else{
				printf("Veiculo muito grande! Capacidade restante: %d\n", CAPACIDADE);
			}
		}else if (a < 0){
			CAPACIDADE = CAPACIDADE - a;			
			printf("Volte sempre! Capacidade restante: %d\n", CAPACIDADE);
		}else{
			break;
		}
	}
}	
			
