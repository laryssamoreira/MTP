#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int t, a, s;
	do{
	printf("Insira um numero nao negativo:\n");
	scanf("%d", &a);
	}while(a<0);
	t = rand()%10;
	s = t + a;
	if(a%2 == 0)
		printf("O numero %d informado, somado ao %d, gerado aleatoriamente, resulta em %d ,que e um numero par.\n", a, t, s);
	else
		printf("O numero %d informado, somado ao %d, gerado aleatoriamente, resulta em %d ,que e um numero impar.\n", a, t, s);
	system("pause");
}