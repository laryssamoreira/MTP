#include <stdio.h>
#include <iostream>
float main(){
	float b, pot=1;
	int p,i=0;
	printf("Insira o numero para se calcular sua potencia:\n");
	scanf("%f",&b);
	printf("Insira o numero para o expoente:\n");
	scanf("%d",&p);
	do{
		pot = pot*b;
		i++;
	}while(i<p);
	printf("O resultado de %.0f elevado a %.0d e %.0f.\n", b, p, pot);
	system("pause");
}