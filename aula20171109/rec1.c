#include <stdio.h>

int soma(int * A, int * n){
    if (*n){
        (*n)--;
        return *A + soma(A + 1, n);
    }
    else
        return 0.0;
}

int main(){
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
    int N = sizeof(A)/sizeof(int);
    printf("A somatoria e = %d \n", soma(A,&N));
    return 0;
}