#include <stdio.h>
int main()
{
    int n, d, p;
    d = 2;
    p = 1;
    printf("Insira um numero inteiro positivo:\n ");
    scanf("%d", &n);
    printf("Inteiro dado = %d \n", n);
    while (p == 1 && d <= n / 2) {
		if (n % d  == 0)
	   	 	p = 0;
			d = d + 1;
    }
    if (p == 1)
		printf("%d e primo \n", n);
    else
		printf(" %d nao e primo \n", n);
    return 0;
}
