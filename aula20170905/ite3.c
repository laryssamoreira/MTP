#include <stdio.h>
#include <iostream>
float main(){
	char palavra[256];
	int i;
	printf("Insira uma palavra:\n");
	scanf("%s",palavra);
	for(i=0; palavra[i]!= '\0'; i++);
	printf("A palavra tem %d letra(s).\n", i);
	system("pause");
	return 0;
}