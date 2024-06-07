#include <stdio.h>
void SEQSearchX1(int T[], int N, int X, int *IX) {
    int i = 0;  
    while (i < N && T[i] != X) {
        i = i + 1;
    }
    if (T[i] == X) {
        *IX = i + 1; 
    } else {
        *IX = 0;  // 
    }
}

int main() {
    int T[] = {19, 1, 28, 5, 20, 15, 52, 13, 16, 29, 71, 65, 10, 18, 87, 5, 90, 35, 7, 11};
    int N = 20;
    int X;
    int IX;

    // Pencarian pertama
    X = 10;
    SEQSearchX1(T, N, X, &IX);
    printf("Indeks X = %d adalah %d\n", X, IX);

    // Pencarian kedua
    X = 70;
    SEQSearchX1(T, N, X, &IX);
    printf("Indeks X = %d adalah %d\n", X, IX);

    return 0;
}
