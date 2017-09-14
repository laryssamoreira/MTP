#include <stdio.h>

float main(){
	float a,fat=1;
	printf("Insira o numero para se calcular o fatorial:\n");
	scanf("%f",&a);
	for(int i=a;i>1; i--)
		fat = fat*i;
	printf("O fatorial de %.0f e %.0f\n", a, fat);
	return 0;
}
