#include <stdio.h> //  O objetivo desse programa eh descobrir se a nave conseguira ou nao escapar de acordo com valores de combustivel ou anti materia que sao inseridos no seu sistema. Tambem eh possivel descobrir qual o tempo em que a nave fugira ou sera atingida apos seu escudo parar de funcionar depois de um tempo t. Erick Kussumoto do Nascimento 196492
int main(){
	int t, c, f, n, T, t2;
	scanf("%d %d", &t, &c);
	for(f = 0, T = t, t2 = 0; f < c && T > 0; T--, t2++){ // aqui eh definido o laco, em que se o fluxo de combustivel for menor do que o necessario, ele recomecara. Se o tempo ultrapassar o funcionamento do escudo, encerrara tambem o laco.
		scanf("%d", &n);
		f = f + n;
	}
	if(f >= c){
		printf("sim\n%d\n", t2); // Ao sair do laco, se o combustivel disponivel for maior do que o necessario, entao a nave conseguira fugir.
	}else{
		printf("nao\n%d\n", t2+1); // Ao sair do laco, se o combustivel disponivel for menor do que o necessario, entao a nave nao conseguira fugir.
	}
}
