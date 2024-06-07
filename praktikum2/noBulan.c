#include <stdio.h>

int main(){
    //kamus
    int noBulan;
    //algoritmik
    printf("masukkan noHari 1 == 12: ");
    scanf("%d", &noBulan);

    if(noBulan == 1){
        printf("Januari\n");
    }
    else if(noBulan == 2){
        printf("Februari\n");
    }
    else if(noBulan == 3){
        printf("Maret\n");
    }
    else if(noBulan == 4){
        printf("April\n");
    }
    else if(noBulan == 5){
        printf("Mei\n");
    }
    else if(noBulan == 6){
        printf("Juni\n");
    }
    else if(noBulan == 7){
        printf("Juli\n");
    }
    else if(noBulan == 8){
        printf("Agustus\n");
    }
    else if(noBulan == 9){
        printf("September\n");
    }
    else if(noBulan == 10){
        printf("Oktober\n");
    }
    else if(noBulan == 11){
        printf("November\n");
    }
    else if(noBulan == 12){
        printf("Desember\n");
    }
    else{
        printf("Masukkan bulan tidak sesuai\n");
    }

    return 0;
}