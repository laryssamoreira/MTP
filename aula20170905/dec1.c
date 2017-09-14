#include <stdio.h>
int main(){
	int a;
	printf("Insira o numero a ser conferido:\n");
	scanf("%d",&a);
	if(a%2 == 0)
		printf("\npar. ");
	else
		printf("\nimpar. ");
	if(a%3 == 0)
		printf("mult.3. ");
	if(a%5 == 0)
		printf("mult.5. ");
	if(a%7 == 0)
		printf("mult.7. ");
	printf("\n");
	return 0;
}
