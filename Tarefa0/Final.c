#include <stdio.h>

int main(){
	int A, B, soma, diferenca, multiplicacao, divisaointeira;
	float divisao;
	
	printf("Entre com dois inteiros\n");
	scanf("%d %d", &A, &B);

	soma = A + B;
	diferenca = A - B;
	multiplicacao = A * B;
	divisaointeira = A / B;
	divisao = A / (float)B;

 	printf("Soma = %d\n" ,soma);
	printf("Diferenca = %d\n", diferenca);
	printf("Multiplicacao = %d\n", multiplicacao);
	printf("Divisao Inteira = %d\n", divisaointeira);
	printf("Divisao = %.2f\n", divisao);

	return 0;

}
