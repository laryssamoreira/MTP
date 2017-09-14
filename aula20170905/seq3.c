#include <stdio.h>
float main(){
	float a,b,c,d,e,m;
	printf("Insira as notas no intervalo de 0 a 10:\n");
	printf("Digite a nota A:\n ");
	scanf("%f", &a);
	printf("Digite a nota B:\n ");
	scanf("%f", &b);
	printf("Digite a nota C:\n ");
	scanf("%f", &c);
	printf("Digite a nota D:\n ");
	scanf("%f", &d);
	printf("Digite a nota E:\n ");
	scanf("%f", &e);
	m = (a*2+b*2+c*2+d*3+e*5)/14;
	printf("\nA media e %f", m);	
	return 0;
}
