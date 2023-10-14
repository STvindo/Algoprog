#include <stdio.h>
#include <string.h>

struct Mahasiswa {
    char Nama[50];
    int Umur;
    float IPK;
};

union Barang {
    int ke;
    float Harga;
};

int main() {
    
    struct Mahasiswa Mahasiswa1;
    strcpy(Mahasiswa1.Nama, "Stephen");
    Mahasiswa1.Umur = 21;
    Mahasiswa1.IPK = 3.99;

    printf("Mahasiswa :\n");
    printf("Nama\t: %s (Address: %p)\n", Mahasiswa1.Nama, &Mahasiswa1.Nama);
    printf("Umur\t: %d (Address: %p)\n", Mahasiswa1.Umur, &Mahasiswa1.Umur);
    printf("IPK\t: %.2f (Address: %p)\n", Mahasiswa1.IPK, &Mahasiswa1.IPK);


    union Barang Barang;
    Barang.ke = 1;

    printf("\nBarang Mahasiswa:\n");
    printf("Ke\t: %d (Address: %p)\n", Barang.ke, &Barang.ke);

    // Mengganti IPK dalam union
    Barang.Harga = 4;

    printf("Harga\t: %.3f (Address: %p)\n", Barang.Harga, &Barang.Harga);

    return 0;
}
