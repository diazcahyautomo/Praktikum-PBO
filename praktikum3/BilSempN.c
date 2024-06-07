#include <stdio.h>

int main() {
    int N, j, i, sum;
    printf("Masukkan bilangan N: ");
    scanf("%d", &N); 
    
    if (N <= 0) {
        printf("N harus bilangan positif");
    }

    else{
        for(i = 1; i <= N; i++) {
        sum = 0;
            for(j = 1; j < i; j++) {
                if(i % j == 0) {
                    sum = sum + j;
                }
            }
                    if(sum == i) {
                        printf("%d ", i);
                }
                    else{
                        printf("Bukan bilangan sempurna");
                }
        }
    }
    return 0;
}