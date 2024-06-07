#include <stdio.h>

void MaxSort(int T[], int N) {
    int i, Pass, Temp, IMax;
    
    
    for (Pass = 0; Pass < N - 1; Pass++) {
    
        IMax = Pass;
        for (i = Pass + 1; i < N; i++) {
            if (T[i] > T[IMax]) {
                IMax = i;
            }
        }
        
        Temp = T[Pass];
        T[Pass] = T[IMax];
        T[IMax] = Temp;
    }
}

int main() {
    int T[] = {7, 1, 3, 5, 3, 8, 6};
    int N = sizeof(T) / sizeof(T[0]);
    
    MaxSort(T, N);
    
    printf("Sorted array in descending order: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");
    
    return 0;
}