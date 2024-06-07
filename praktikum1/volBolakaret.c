#include <stdio.h>
#include <math.h>

//konstanta PHI
#define PI 3.14159

int main() {
//kamus
  float r, vb, vk;

  printf("masukkan jari jari lingkaran(r): ");
  scanf("%f" , &r);
//menerapkan hasil (algorimtik)
  vb = 4 / 3 * (PI * r * r * r);
  vk = 0.5 * vb;
//output
  printf("volume bola: %.2f\n", vb);
  printf("volume kerucut: %.2f\n", vk);
  return 0;

}