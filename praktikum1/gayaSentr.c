#include <stdio.h>

int main() {
  
  //kamus
  float m, v, r;
  float F;
  printf("masukkan massa (m): ");
  scanf("%f", &m);
  printf("masukkan kecepatan (v): ");
  scanf("%f", &v);
  printf("masukkan jari jari (r): ");
  scanf("%f", &r);

  //menghitung gaya sentr (algoritmik)
  F = m * (v * v / r);

  //menampilkan hasil
  printf("jarak yang ditempuh adalah: %.2f\n", F);
  return 0;
}