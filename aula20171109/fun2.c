#include <stdio.h>

int divisao(int * resto, int * quociente, int a, int b){
	*resto = a%b;
	*quociente = a/b;
	return 0;
}

int main(){
	int a,b,resto,quociente;
	printf("Insira o dividendo e o divisor:\n");
	scanf("%d %d", &a, &b);
	divisao( &resto, &quociente, a, b);
	printf("\nquociente: %d   resto: %d", quociente, resto);
	return 0;
}