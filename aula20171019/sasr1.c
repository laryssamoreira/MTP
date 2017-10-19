#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#define N 256

void falas() {
    int fala = rand()%12;
    switch(fala) {
	case 0: printf("Tudo bem?\n"); break;
	case 1: printf("Ok\n"); break;
	case 2: printf("LOL!\n"); break;
	case 3: printf("Que legal\n"); break;
	case 4: printf("Que chato\n"); break;
	case 5: printf("Fale mais sobre isso\n"); break;
	case 6: printf("Sobre o que mais quer falar?\n"); break;
	case 7: printf("Eu nao acho...\n"); break;
	case 8: printf("Ual!!\n"); break;
	case 9: printf("Triste né\n"); break;
	case 10: printf("Q louco ein\n"); break;
	case 11: printf("Desista\n"); break;
    }
}

int main() {
    srand(time(0));
    char str[N]; int i;
    printf("Vamos conversar? Sobre o que quer falar?\n");
    while(1) {
	fgets(str,N,stdin);
	for(i = 0; i < N; i++) str[i] = toupper(str[i]);
	if(strncmp(str,"TCHAU",5) == 0) break;
	falas();
    }
    printf("Uma pena... Foi bom falar com voce, ate logo!\n");
    return EXIT_SUCCESS;
}
