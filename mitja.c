#include <stdio.h>

int main() {
	float suma=0;
	float mitja;
	float nou_valor;
	int numero_repeticions=0;
	char consulta='s';
	
	while(consulta=='s') {
		printf("garcia23Dòna la següent dada: ");
		scanf("%f",&nou_valor);
		suma=suma+nou_valor;
		numero_repeticions=numero_repeticions+1;
		printf("garcia23Vols continuar (s/n): ");
		scanf("%s",&consulta); 
	}
	mitja=suma/numero_repeticions;
	printf("garcia23La mitja és: %.2f\n",mitja);	
	return 0;
}
