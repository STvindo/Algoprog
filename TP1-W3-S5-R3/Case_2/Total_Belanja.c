#include <stdio.h>

int main()
{

    // Deklarasi Variable
    int Harga;
    int Transaksi = 1;
    float Diskon;
    float TotalHarga = 0;
    char Lagi;

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("        Program Menghitung Total Belanja\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    do
    {
        printf("\nMasukan Harga Belanjaan Anda : Rp.");
        scanf("%d", &Harga);

        Diskon = 0;

        /* Penambahan Diskon Bila Transaksi Lebih Dari 4 Kali (Optional 1) | Hapus Tanda Komentar Bila Ingin Aktif
        if (Transaksi >= 4)
        {
            Diskon += 0.20;
        }
        */

        // Pemberian Diskon Tergantung Harga Belanja
        if (Harga >= 200000 && Harga <= 500000)
        {
            Diskon += 0.10; 
        }
        // Menurut Saya aneh apabila 500 Ribu - 550 Ribu tidak mendapat diskon ataupun 15%
        else if (Harga > 500000 && Harga <= 1000000)
        {
            Diskon += 0.20; 
        }
        else if (Harga > 1000000)
        {
            Diskon += 0.30; 
        }

        // Mengitung Harga Setelah Diskon
        float HargaBelanja = Harga * (1 - Diskon);

        // Menambahkan Keseluruhan Total Transaksi
        TotalHarga += HargaBelanja;

        // Pemberian Diskon Bila Transaksi Lebih Dari 4 Kali Pada Total Akhir (Optional 2) | Beri Tanda Komentar Bila Ingin Nonaktif
        if (Transaksi >= 4)
        {
            TotalHarga = TotalHarga * 0.80;
        }
        
        // Menampilkan Hasil Transaksi
        printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
        printf("            Jumlah Harga Belanja\n");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n");
        printf("Transaksi ke-%d\n", Transaksi);
        printf("Harga belanja             : Rp.%d\n", Harga);
        printf("Diskon yang diberikan     : %.f%%\n", Diskon * 100);
        printf("Jumlah Harga Belanja Anda : Rp.%.f\n\n", HargaBelanja);

        // Menambah Transaksi
        printf("Apakah Anda ingin memasukkan belanjaan lagi? (Y/N): ");
        scanf(" %c", &Lagi); 

        // Menambahkan transaksi jika pengguna memilih Y atau y
        if (Lagi == 'Y' || Lagi == 'y')
        {
            Transaksi++;
        }

    } while (Lagi == 'Y' || Lagi == 'y');

    // Menampilkan Keseluruhan Transaksi Jika N atau n
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("        Total Harga Keseluruhan Belanja\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n");
    printf("Total Harga Keseluruhan Anda : Rp.%.f\n\n", TotalHarga);
    printf("================================================\n\n");

    return 0;
}
