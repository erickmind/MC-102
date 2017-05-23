#include <stdio.h> // Erick Kussumoto do Nascimento 196492
int main(){
	int G, R, K, n, SR1, SR2, SK1, SK2, RR, RK, ATK, i, j, m;
    RR=0;
    RK=0;
	ATK = 0;
	R=0;
	K=0;
	while(1){
		scanf("%d", &G);
		
		if(G > 0 && ATK < 0 || G == 0){
			if(R > K){
				RR++;
			}
			if(R < K){
				RK++;
			}
			if(R == K){
				RR++;
				RK++;
			}
			R=0;
			K=0;
		}
		
		ATK = G;
				
		if(G > 0){ // Golpe do Ryu	
			SR1=0;
			for(i=1; i < G; i++){ // NUMERO PERFEITO
				if(G % i == 0){ // Se o Golpe for divisivel por i:
					SR1 = SR1 + i; // Soma-se ele a variavel acumuladora.
				}
				if(SR1 == G){ // Se a variavel acumuladora se tornar igual a Golpe (ou seja, a soma de seus divisores for igual ao numero):
					G = G * 3;
					break;
				}
			}
			m=0;
			SR2=0;
			for(j=0; m <= G; j++){ // NUMERO TRIANGULAR
				SR2 = SR2 + j; // Soma-se a m os numeros menores do que G, ate que m torne-se igual a G, se nao, o laco acaba.
				m++;
				if(SR2 == G){ // Se m==G, quer dizer que o numero eh triangular. 
					break;
				}
			}
			if(SR2 == G){ // Se o numero eh triangular, aplica-se a operacao.
				G = G * 2;
			}
			R = R + G;
		}
		
		if(G < 0){ // Golpe do Ken
			SK1=0;
			for(i=-1; i > G; i--){ // NUMERO PERFEITO
				if(G % i == 0){
					SK1 = SK1 + i;
				}
				if(SK1 == G){
					G = G * 3;
				}
			}
			SK2=0;
			m=0;
			for(j=0; m >= G; j--){ // NUMERO TRIANGULAR
				SK2 = SK2 + j;
				m--;
				if(SK2 == G){
					break;
				}
			}	
			if(SK2 == G){
				G = G * 2;
			}
			K = K - G;
		}

		if(G == 0){
			if(RR > RK){
				printf("Ryu venceu\n");
			}
			if(RR < RK){
				printf("Ken venceu\n");
			}
			if(RR == RK){
				printf("empatou\n");
			} 
			break;
		}		
	}
}

