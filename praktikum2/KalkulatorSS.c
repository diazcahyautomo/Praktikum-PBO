#include <stdio.h>

int main() {
    int iA, iB;
    char pilihan;
    
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &iA);
    
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &iB);
    
    printf("Pilih operasi aritmatika:\n");
    printf("a. Penjumlahan\n");
    printf("b. Pengurangan\n");
    printf("c. Perkalian\n");
    printf("d. Pembagian\n");
    printf("e. Pembagian integer\n");
    printf("f. Modulus\n");
    
    printf("Masukkan pilihan: ");
    scanf(" %c", &pilihan);
    
    switch(pilihan) {
        case 'a':
            printf("Hasil penjumlahan: %d\n", iA + iB);
            break;
        case 'b':
            printf("Hasil pengurangan: %d\n", iA - iB);
            break;
        case 'c':
            printf("Hasil perkalian: %d\n", iA * iB);
            break;
        case 'd':
            if (iB != 0) {
                float hasilBagi = (float)iA / iB;
                printf("Hasil pembagian: %.2f\n", hasilBagi);
            } else {
                printf("Tidak bisa melakukan pembagian dengan nol\n");
            }
            break;
        case 'e':
            if (iB != 0) {
                int hasilDiv = iA / iB;
                printf("Hasil pembagian integer: %d\n", hasilDiv);
            } else {
                printf("Tidak bisa melakukan pembagian dengan nol\n");
            }
            break;
        case 'f':
            if (iB != 0) {
                int hasilMod = iA % iB;
                printf("Hasil modulus: %d\n", hasilMod);
            } else {
                printf("Tidak bisa melakukan modulus dengan nol\n");
            }
            break;
        default:
            printf("Bukan pilihan menu yang benar\n");
    }
    
    return 0;
}

            