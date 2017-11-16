#include <stdio.h>
int imprime(int **matriz, int N, int M) {
  int i, j;
  printf("\nMatriz %dx%d:\n", N, M);
  for(i = 0; i < N; i++)
    for(j = 0; j < M; j++)
      printf("%d%c", matriz[j][i], (j == M-1)? '\n':'\t');
      return 0;
}

int main(){
	int **matriz;
	int i,j,l,C;
	printf("Digite a ordem da matriz,linhas e colunas, RESPECTIVAMENTE");
	scanf("%dx%d",&l,&C);
	matriz = calloc(l,sizeof(int*));
  	for(i = 0; i < l; i++) {
	matriz[i] = calloc(C,sizeof(int));}
	for(i=0;i<l;i++){
		printf("Digite os valores da linha %d\n:" ,i+1);
		for(j=0;j<C;j++){
			scanf("%d",&matriz[i][j]);
			}
		}
	imprime(matriz,l,C);
	return 0;
}
