#include <stdio.h> // No programa a seguir, tenta-se criar um codigo capaz de definir o tempo necessario para ativar um microexplosivo que desviara a trajetoria de uma bomba para outra localidade. Erick Kussumoto do Nascimento 196492

int main(){
	float h, vb, d,	T, t, va, t1, t2;
	scanf("%f", &h);
	scanf("%f", &vb);
	scanf("%f", &d);
	scanf("%f", &T); //  Aqui sao definidos os valores das variaveis de acordo com os dados obtidos no enunciado. 

	va = T; //  Como F=m*a, e a massa da bomba e 1kg, a aceleracao sera sempre a=T. Porem como nao ha aceleracao, considera-se como a velocidade da bomba no eixo X.
	t1 = h / vb; // Calculo do tempo necessario para percorrer toda a altura h.
	t2 = d / va; // Calculo do tempo necessario para percorrer toda a distancia d.
	t = t1 - t2; // Como deseja-se achar o tempo em que devera ser acionado o micro explosivo, t pode ser definido como a diferenca do tempo total de queda e o tempo necessario para percorrer a distancia d.

	printf("%.3f\n", t);

	return 0;
}
