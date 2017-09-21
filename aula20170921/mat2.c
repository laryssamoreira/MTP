#include <stdio.h>
#include <ctype.h>
#include <math.h>
int main(){
	float a, b, c, ang;
	printf("Insira o lado b do triangulo:\n");
	scanf("%f",&b);
	printf("Insira o lado c do triangulo:\n");
	scanf("%f",&c);
	printf("Insira o angulo, em radianos:\n");
	scanf("%f",&ang);
	a = sqrt( (pow(b,2)) + (pow(c,2)) - (2*b*c*(cos(ang))) );
	printf("\nO lado (a) e igual a: %.4f", a);
	return 0;
}