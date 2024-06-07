#include <stdio.h>

int main(){
    //kamus
    int noHari;
    //algoritmik
    printf("masukkan noHari 1 == 7: ");
    scanf("%d", &noHari);

    if(noHari == 1){
        printf("Senin\n");
    }
    else if(noHari == 2){
        printf("Selasa\n");
    }
    else if(noHari == 3){
        printf("Rabu\n");
    }
    else if(noHari == 4){
        printf("Kamis\n");
    }
    else if(noHari == 5){
        printf("Jumat\n");
    }
    else if(noHari == 6){
        printf("Sabtu\n");
    }
    else if(noHari == 7){
        printf("Minggu\n");
    }
    else{
        printf("Masukkan hari tidak sesuai\n");
    }

    return 0;
}