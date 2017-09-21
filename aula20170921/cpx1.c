#include <stdio.h>
#include <ctype.h>
#include <complex.h>
int main(){
	float a1, a2, b1, b2, af=0, bf=0;
	printf("Insira a parte real do primeiro numero:\n");
	scanf("%f",&a1);
	printf("Insira a parte imaginaria do primeiro numero:\n");
	scanf("%f",&b1);
	printf("Insira a parte real do segundo numero:\n");
	scanf("%f",&a2);
	printf("Insira a parte imaginaria do segundo numero:\n");
	scanf("%f",&b2);
	af = a1+a2;
	bf = b1+b2;
	printf("\nO numero complexo e : %.2f + %.2f i", af, bf);
	return 0;
}