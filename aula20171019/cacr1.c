#include <stdio.h>
#include <stdlib.h>

int eprimo(unsigned int numero) {
	unsigned int i;
	int v = 1;
	for(i = 2; i <= numero/2; i++) 
			if(numero%i == 0) {
				v = 0;
				break;
				}
	return v;
}

int mostra(unsigned int numero) {
	int i, p = 0;
	for(i = 1; i <= numero/2; i++)
		if(eprimo(i) && eprimo(numero-i)) {
			printf("%d + %d\n", i, numero-i);
			p++;
		}
	return p;
}

int main() {
    unsigned int numero, p;
    printf("Insira um numero: ");
    scanf("%u", &numero);
    if(eprimo(numero))
		printf("E' primo!\n");
	else {
		p = mostra(numero);
		if(p > 0)
			printf("Sao %d possbilidades.", p);
		else
			printf("Não e primo nem expresso por soma de primos.\n");
	}
    return EXIT_SUCCESS;
}
