#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	int a,b,c,s,op;
	do{
	a = (rand()%6)+1;
	b = (rand()%6)+1;
	c = (rand()%6)+1;
	s = a + b + c;
	if(s == 7 || s == 11)
		printf("\nOs numeros %d, %d e %d, gerados aleatoriamente, somados, resultam em %d.Voce ganhou!\n", a, b, c, s);
	else
		printf("\nOs numeros %d, %d e %d, gerados aleatoriamente, somados, resultam em %d.Voce perdeu.\n", a, b, c, s);
	printf("\nInsira 1 para repetir.\n");
	scanf("%d",&op);
	}while(op == 1);
	return 0;
}
