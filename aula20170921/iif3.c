#include <stdio.h>

int main(){
	float a;
	double fat=1;
	printf("Insira o numero para se calcular o fatorial:\n");
	scanf("%f",&a);
	for(int i=a;i>1; i--)
		fat = fat*i;
	printf("O fatorial de %.0f e %.0lf\n", a, fat);
	return 0;
}