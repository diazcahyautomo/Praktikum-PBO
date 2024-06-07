#include <stdio.h>


int main() {
    //kamus
    float s1, s2, d1, d2, Luas, Kell;
    printf("Masukkan sisi satu layang-layang (dalam meter): ");
    scanf("%f", &s1);
    printf("Masukkan sisi dua layang-layang (dalam meter): ");
    scanf("%f", &s2);
    printf("Masukkan diagonal satu layang-layang (dalam meter): ");
    scanf("%f", &d1);
    printf("Masukkan diagonal dua layang-layang (dalam meter): ");
    scanf("%f", &d2);

    //algoritmik
    Luas = 0.5 * d1 * d2 ;
    Kell = 2 * (s1 + s2);

    //output
    printf("Luas layang-layang adalah %.2f meter persegi\n", Luas);
    printf("Keliling layang-layang adalah %.2f meter\n", Kell);
    return 0;
}