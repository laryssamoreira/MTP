#include <stdio.h>

int soma(int * a, int * b, int * c, int * d, int * numR, int * denR){
	*numR= (*a)*(*d) + (*c)*(*b);
	*denR = (*b)*(*d);
	return 0;
}
int MDC (int x, int y){
    if(x == y || y == 0)
        return x;
    else if (x == 0)
        return y;
    else if (x%2 == 0 && y%2 == 1)
        return MDC (x/2, y);
    else if (x%2 == 1 && y%2 == 0)
        return MDC (x, y/2);
    else if (x%2 == 0 && y%2 == 0)
        return 2 * MDC(x/2,y/2);
    else if (x > y)
        return MDC((x-y)/2, y);
    else
        return MDC ((y-x)/2, x);
}

int main(){
	int a,b,d,c, numR, denR;
	do{
	printf("Insira o numerador e o denominador da primeira fracao:\n");
	scanf("%d %d", &a, &b);
	printf("Insira o numerador e o denominador da segunda fracao:\n");
	scanf("%d %d", &c, &d);
	if(d==0 || b==0 )
		printf("\nERRO\n");
	}while(d==0 || b==0 );
	soma( &a, &b, &c, &d, &numR, &denR);
	printf("\nA soma resulta em %d/%d \n", (numR/MDC(numR, denR)), (denR/MDC(numR,denR)));
	return 0;
}