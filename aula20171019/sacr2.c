#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int dado() {
int  n;
n = rand()%6 + 1;
printf("\n%d\n", n);
return n;
}
 
int main() {
    srand(time(0));
    char c ;
    char s=1;
    int m, i = 4, j = 0, soma = 0;
    printf("Simulador de dado vs. 1.0 - Digite ENTER 5 vezes para rodar o dado, o vencedor precisa somar de 18 a 23. Se quiser sair pressione 'Q' para sair\n");
    do {
        scanf("%c", &c);
        soma = soma + dado();
        printf("\nPressione mais %d vezes", i);
        i--;
    } while(c != 'q' && c != 'Q' && i>-1);
	printf(" soma= %d",soma);
	if(soma<=23 && soma>=18){
	  printf("\nVoce ganhou %c !!!\n", s);
	}
	else
	  	printf("\nVoce perdeu :(");
	printf("\nObrigado pela preferencia!\n");
    return EXIT_SUCCESS;
}
