#include <stdio.h> // O objetivo do programa e criar um codigo capaz de informar o custo sobre uma corrida utilizando uma determinada taxa, valor inicial e a distancia Manhattan percorrida durante o percurso. Erick Kussumoto do Nascimento 196492
int main(){
	int vi, xi, yi, xf, yf, t, v, d;
		
	scanf("%d", &vi); 
	scanf("%d", &xi);
	scanf("%d", &yi);
	scanf("%d", &xf);
	scanf("%d", &yf);
	scanf("%d", &t); // definindo as variaveis atraves dos dados obtidos

	d = (xf - xi) + (yf - yi); // determinando a variavel d, atraves das coordenadas dadas
	v = vi + d*t; // calculo do valor dado no enunciado
	
	printf("%d\n", v); // valor final a ser impresso no programa
	
	return 0;

}
	 
	
