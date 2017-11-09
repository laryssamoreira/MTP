#include <stdio.h>

int soma(int * a, int * b, int * c, int * d){
	*a = (*a)*(*d) + (*c)*(*b);
	*b = (*b)*(*d);
	printf("\n na funcao: %d / %d", *a,*b);
	return 0;
}

int main(){
	int a,b,d,c;
	do{
	printf("Insira o numerador e o denominador da primeira fracao:\n");
	scanf("%d %d", &a, &b);
	printf("Insira o numerador e o denominador da segunda fracao:\n");
	scanf("%d %d", &c, &d);
	if(d==0 || b==0 )
		printf("\nERRO\n");
	}while(d==0 || b==0 );
	soma( &a, &b, &c, &d);
	printf("\npos funcao %d / %d", a,b);
	return 0;
}