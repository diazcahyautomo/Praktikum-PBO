#include <stdio.h>

int main() {
    int T[] = {7,4,5,7,6,5,3,5,1,4};
    int n = sizeof(T) / sizeof(T[0]);
    int frek[100] = {0};
    int i, j, sum = 0;

    for(i = 0; i < n; i++) {
        frek[T[i]]++;
    }

    for(i = 0; i < 100; i++) {
        if(frek[i] > 1) {
            for(j = 0; j < frek[i]; j++) {
                sum += i;
            }
        }
    }

    printf("Jumlah elemen tabel T yang frekuensi kemunculannya lebih dari satu kali adalah %d\n", sum);

    return 0;
}
