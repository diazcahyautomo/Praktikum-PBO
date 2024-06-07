#include <stdio.h>

int main() {
    int i, N, sum = 0;
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    
    for(i = 1; i <= N / 2; i++) {
        if(N % i == 0) {
            sum += i;
        }
    }

    
    if(sum == N) {
        printf("Bilangan Sempurna {jumlah faktor bilangannya ");
        for(i = 1; i <= N / 2; i++) {
            if(N % i == 0) {
                printf("%d", i);
                if(i < N / 2) {
                    printf("+");
                }
            }
        }
        printf("=%d}\n", N);
    } else {
        printf("Bukan Bilangan Sempurna\n");
    }

    return 0;
}
