#include <stdio.h>

int main() {
  float v0, t, a;
  float S;
  printf("masukkan kecepatan awal (v0): ");
  scanf("%f", &v0);
  printf("masukkan waktu (t): ");
  scanf("%f", &t);
  printf("masukkan percepatan (a): ");
  scanf("%f", &a);

  //menghitung jarak
  S = v0 * t + 0.5 * (a * t * t);

  //menampilkan hasil
  printf("jarak yang ditempuh adalah: %.2f\n", S);
  return 0;
}