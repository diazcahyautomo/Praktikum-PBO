#include <stdio.h>

void insertionSort(int T[], int N) {
    int Pass, i, Temp;

    for (Pass = 1; Pass < N; Pass++) {
        Temp = T[Pass];
        i = Pass - 1;

        while (i >= 0 && T[i] > Temp) {
            T[i + 1] = T[i];
            i = i - 1;
        }
        T[i + 1] = Temp;
    }
}

int main() {
    int T[] = {7, 1, 4, 5, 3, 6, 6};
    int N = sizeof(T) / sizeof(T[0]);

    insertionSort(T, N);

    printf("Sorted array: \n");
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}