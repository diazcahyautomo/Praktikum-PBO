#include <stdio.h>
#include <math.h>

//konstanta gravitasi
#define g 9.81

int main() {
  //kamus
  float v0, t;
  float y;
  printf("masukkan kecepatan awal(v0): ");
  scanf("%f", &v0);
  printf("masukkan waktu (t): ");
  scanf("%f", &t);


  //menghitung jarak (algoritmik)
  y = v0 * t + 0.5 * (g * t * t);

  //menampilkan hasil
  printf("jarak yang ditempuh adalah: %.2f\n", y);
  return 0;
}