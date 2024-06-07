#include <stdio.h>

int main() {
    int n, angka = 0;
    
    printf("Masukkan n: ");
    scanf("%d", &n);
    
    printf("Pola Segitiga\n");
    for(int baris = 1; baris <= n; baris++) {
        for(int kolom = 1; kolom <= baris; kolom++) {
            printf("%d", angka);
            angka = (angka + 1) % 10;
        }
        printf("\n");
    }
    
    return 0;
}
