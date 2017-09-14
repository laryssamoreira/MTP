#include <stdio.h>
int main(){
	int n, m, i;
	printf("Insira o numero a ser conferido:\n");
	scanf("%d", &n);
	m=0;
	i=1;
	do{
		if(n%i==0)
			m = m+i;
		i++;
	}while(i<n);
	if(m==n)
		printf("\nO numero e perfeito.\n");
	else
		printf("\nO numero nao e perfeito.\n"); 
	return 0;
}