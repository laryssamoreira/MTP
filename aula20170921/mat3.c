#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main(){
	float n, b, resultado;
	printf("Insira o numero desejado:\n");
	scanf("%f",&n);
	printf("Insira a base desejada:\n");
	scanf("%f",&b);
	resultado = log(n)/log(b);
	printf("\nO logaritmo e igual a: %.4f", resultado);
	return 0;
}