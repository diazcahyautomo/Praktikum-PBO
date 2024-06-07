#include <stdio.h>

int main() {
    int k, n, count = 0, i = 1;
    
    printf("Masukkan k: ");
    scanf("%d", &k);
    printf("Masukkan n: ");
    scanf("%d", &n);
    
    printf("Deret Bilangan\n");
    while(count < n) {
        if(i % k != 0) {
            printf("%d ", i);
            count++;
        }
        i++;
    }
    
    return 0;
}


