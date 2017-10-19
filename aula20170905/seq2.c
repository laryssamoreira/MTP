#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
	int b=0, h=0, a=0;
	printf("Informe o valor da base:\n");
	scanf("%d",&b);
	printf("Informe o valor da altura:\n");
	scanf("%d",&h);
	a = b*h;
	printf("\nA area e: %d\n",a);
	system("pause");
	return 0;
}