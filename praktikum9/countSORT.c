#include <stdio.h>
#include <stdlib.h>

void CountSort(int T[], int N) {
    int i, K;
    int ValMin = T[0], ValMax = T[0];
    
    
    for (i = 1; i < N; i++) {
        if (T[i] < ValMin) {
            ValMin = T[i];
        }
        if (T[i] > ValMax) {
            ValMax = T[i];
        }
    }
    
    
    int range = ValMax - ValMin + 1;
    int *TabCount = (int *)calloc(range, sizeof(int));
    
    // Counting
    for (i = 0; i < N; i++) {
        TabCount[T[i] - ValMin]++;
    }
    
    
    K = 0;
    for (i = 0; i < range; i++) {
        while (TabCount[i] > 0) {
            T[K] = i + ValMin;
            K++;
            TabCount[i]--;
        }
    }
    
    // Membersihkan memori
    free(TabCount);
}

int main() {
    int T[] = {7, 1, 3, 5, 3, 8, 6};
    int N = sizeof(T) / sizeof(T[0]);
    
    CountSort(T, N);
    
    printf("Sorted array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");
    
    return 0;
}