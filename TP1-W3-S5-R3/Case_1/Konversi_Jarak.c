#include <stdio.h>

// Deklarasi fungsi konversi
void konversi(float KM);

// Fungsi utama
float main()
{
    // Deklarasi variabel
    float KM;

    printf("Tugas Personal Konversi Jarak\n");
    
    // Membaca input dari pengguna
    printf("Masukan KM =");
    scanf("%f", &KM);

    // Memanggil fungsi konversi
    konversi(KM);

    return 0;
}

// Fungsi konversi
void konversi(float KM)
{
    // Deklarasi variabel untuk hasil konversi
    float M, CM;

    // Konversi KM ke meter dan centimeter
    M = KM * 1000;
    CM = KM * 100000;

    // Menampilkan hasil konversi
    printf("Hasil Konversi %.2f KM = %.0f M, %.0f CM\n", KM, M, CM);
}
