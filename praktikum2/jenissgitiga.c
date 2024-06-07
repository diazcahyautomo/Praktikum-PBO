#include <stdio.h>

char JenisSegitiga(int s1, int s2, int s3) {
    char jenis;
    
    if ((s1 == s2) && (s2 == s3)) {
        jenis = 'S';
    } 
	else if ((s1 == s2) || (s2 == s3) || (s1 == s3)) {
        jenis = 'K';
    } 
	else {
        jenis = 'L';
    }
    
    return jenis;
}

int main() {
    int s1, s2, s3;
    
    printf("Masukkan nilai sisi 1: ");
    scanf("%d", &s1);
    
    printf("Masukkan nilai sisi 2: ");
    scanf("%d", &s2);
    
    printf("Masukkan nilai sisi 3: ");
    scanf("%d", &s3);
    
    if (s1 <= 0 || s2 <= 0 || s3 <= 0) {
        printf("Terdapat nilai yang bukan sisi segitiga\n");
    } 
	else {
        char jenis = JenisSegitiga(s1, s2, s3);
        
        if (jenis == 'S') {
            printf("Segitiga Sama Sisi\n");
        } 
		else if (jenis == 'K') {
            printf("Segitiga Sama Kaki\n");
        } 
		else {
            printf("Segitiga Sembarang\n");
        }
    }
    
    return 0;
}
