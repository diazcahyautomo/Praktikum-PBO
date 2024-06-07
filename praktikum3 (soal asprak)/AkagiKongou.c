#include <stdio.h>

int main() {
    int A, B, C, round = 1;
    printf("Masukkan angka yang dipilih Akagi: ");
    scanf("%d", &A);
    printf("Masukkan angka yang dipilih Kongou: ");
    scanf("%d", &B);

    while(B != 0) { // Selama B bukan 0, permainan terus berlangsung
        C = A - B; // Menghitung nilai C
        A = B; // Mengganti nilai A dengan B
        B = C; // Mengganti nilai B dengan C

        // Menampilkan hasil setiap babak
        printf("Babak %d\n", round);
        printf("C = %d\n", C);
        printf("A = %d\n", A);
        printf("B = %d\n", B);
        round++;

        if(B < 0) { // Jika B negatif, Akagi menang
            printf("Pemenangnya adalah Akagi\n");
            return 0;
        }
    }

    // Jika B menjadi 0, Kongou menang
    printf("Pemenangnya adalah Kongou\n");
    return 0;
}
