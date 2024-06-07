#include <stdio.h>
#include <stdbool.h>

int sequentialSearch2(int T[], int N, int X) {
    bool ketemu = false;
    int i = 1;
    int IX;

    while ((i <= N) && (!ketemu)) {
        if (T[i] == X) {
            ketemu = true;
        } else {
            i++;
        }
    }

    if ((i <= N) && ketemu) {
        IX = i;
    } else {
        IX = 0;
    }

    return IX;
}

int main() {
    int T[] = {0, 5, 10, 15, 20, 25, 30, 35, 40, 45, 50}; 
    int N = 10;  
    int X;

    // a. X = 15
    X = 15;
    int index = sequentialSearch2(T, N, X);
    if (index != 0) {
        printf("X = %d ketemu di index %d\n", X, index);
    } else {
        printf("X = %d tidak ketemu\n", X);
    }

    // b. X = 60
    X = 60;
    index = sequentialSearch2(T, N, X);
    if (index != 0) {
        printf("X = %d ketemu di index %d\n", X, index);
    } else {
        printf("X = %d tidak ketemu\n", X);
    }

    return 0;
}
