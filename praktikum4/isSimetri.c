#include <stdio.h>
#include <stdbool.h>

bool isSimetric(int T1[], int sizeT1, int T2[], int sizeT2) {
    if(sizeT1 != sizeT2) {
        return false;
    }

    for(int i = 0; i < sizeT1; i++) {
        if(T1[i] != T2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    int T1[] = {7,4,5,7,6,5,3,5,1,4};
    int sizeT1 = sizeof(T1) / sizeof(T1[0]);

    int T2[] = {7,4,5,7,6,5,3,5,1,4};
    int sizeT2 = sizeof(T2) / sizeof(T2[0]);

    if(isSimetric(T1, sizeT1, T2, sizeT2)) {
        printf("T1 dan T2 Simetri.\n");
    } else {
        printf("T1 dan T2 Tidak Simetri.\n");
    }

    return 0;
}
