#include <stdio.h>
#include <ctype.h>
int main(){
	char palavra[500];
	int i, f=0;
	printf("Insira uma frase:\n");
	fgets(palavra,500,stdin);
	for(i=0; palavra[i]; i++){
		if(isalpha(palavra[i]))
			f++;
	}
	printf("%i",f);
	return 0;
}