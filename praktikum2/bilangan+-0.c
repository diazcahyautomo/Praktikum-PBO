#include <stdio.h>

int main(){

    int i;
    printf("masukkan nilai i:");
    scanf("%d", &i);

    if(i > 0){
        printf("Bilangan positif");
    
    } else if(i == 0){
        printf("Bilangan 0");
    }
    else{
        printf("bilangan negatif");
    }

    return 0;
}