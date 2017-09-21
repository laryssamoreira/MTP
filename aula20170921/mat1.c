#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main(){
	float xa, xb, ya, yb, d=0;
	printf("Insira a coordenada X do primeiro ponto:\n");
	scanf("%f", &xa);
	printf("Insira a coordenada Y do primeiro ponto:\n");
	scanf("%f", &ya);
	printf("Insira a coordenada X do segundo ponto:\n");
	scanf("%f", &xb);
	printf("Insira a coordenada Y do segundo ponto:\n");
	scanf("%f", &yb);
	d = sqrt((pow(xb-xa,2))+(pow(yb-ya,2)));
	printf("\nA distancia e: %f",d);
	return 0;
}