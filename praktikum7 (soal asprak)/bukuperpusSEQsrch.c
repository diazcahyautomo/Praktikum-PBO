#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[101];
    int stok;
} Buku;

int cariBuku(Buku perpustakaan[], int jumlahBuku, char namaBuku[]) {
    for (int i = 0; i < jumlahBuku; i++) {
        if (strcmp(perpustakaan[i].nama, namaBuku) == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int Q;
    scanf("%d", &Q);
    Buku perpustakaan[100];
    int jumlahBuku = 0;

    for (int i = 0; i < Q; i++) {
        int q;
        char namaBuku[101];
        scanf("%d %[^\n]s", &q, namaBuku);

        int indexBuku = cariBuku(perpustakaan, jumlahBuku, namaBuku);

        if (q == 1) {
            if (indexBuku != -1) {
                printf("%d\n", perpustakaan[indexBuku].stok);
            } else {
                printf("0\n");
            }
        } else if (q == 2) {
            if (indexBuku != -1) {
                perpustakaan[indexBuku].stok++;
            } else {
                strcpy(perpustakaan[jumlahBuku].nama, namaBuku);
                perpustakaan[jumlahBuku].stok = 1;
                jumlahBuku++;
            }
            printf("Terima Kasih\n");
        } else if (q == 3) {
            if (indexBuku != -1 && perpustakaan[indexBuku].stok > 0) {
                perpustakaan[indexBuku].stok--;
                printf("Buku Berhasil Dipinjam\n");
            } else {
                printf("Maaf Stok Kosong\n");
            }
        }
    }

    return 0;
}