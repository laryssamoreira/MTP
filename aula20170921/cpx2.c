#include <stdio.h>
#include <complex.h>
int main(){
	float a, b; 
	double complex c, resultado;
	printf("Insira a parte real do numero:\n");
	scanf("%f",&a);
	printf("Insira a parte imaginaria do numero:\n");
	scanf("%f",&b);
	c = a + b * I;
	resultado = (conj(c)*c);
	printf("\n %lf + %lf*I",creal(resultado), cimag(resultado));
	return 0;
}