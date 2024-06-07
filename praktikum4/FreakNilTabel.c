#include <stdio.h>

void FrekNilTabel(int T[], int n) {
    int i, j;
    int sudahDitampilkan[n];
    for (i = 0; i < n; i++) {
        sudahDitampilkan[i] = 0;
    }

    for (i = 0; i < n; i++) {
        int count = 1;
        if (sudahDitampilkan[i] == 1) {
            continue;
        }
        for (j = i + 1; j < n; j++) {
            if (T[i] == T[j]) {
                count++;
                sudahDitampilkan[j] = 1;
            }
        }
        if (count > 1) {
            printf("%d ", T[i]);
        }
    }
    printf("\n");
}

int main() {
    int T[] = {7, 4, 5, 7, 6, 5, 3, 5, 1, 4};
    int n = sizeof(T) / sizeof(T[0]);
    FrekNilTabel(T, n);
    return 0;
}
