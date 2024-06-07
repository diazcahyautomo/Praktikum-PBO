#include <stdio.h>

void bubbleSort(int T[], int N) {
    int Temp;
    for (int Pass = 0; Pass < N - 1; Pass++) {
        for (int K = N - 1; K > Pass; K--) {
            if (T[K] < T[K - 1]) {
                Temp = T[K];
                T[K] = T[K - 1];
                T[K - 1] = Temp;
            }
        }
    }
}

int main() {
    int T[] = {7, 1, 4, 5, 3, 6, 6};
    int N = sizeof(T) / sizeof(T[0]);

    bubbleSort(T, N);

    printf("Sorted array: \n");
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}