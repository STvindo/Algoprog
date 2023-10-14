#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void clearScreen()
{
#if defined(_WIN32) || defined(_WIN64)
    system("cls"); // Untuk Windows
#else
    system("clear"); // Untuk Linux/Unix
#endif
}

void Judul()
{
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("\tProgram Penghitung Huruf Bulan\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n");
}

int main()
{
    // Membersihkan Layar dan Menampilkan Judul
    clearScreen();
    Judul();

    char input;
    printf("Masukkan huruf A-Z: ");
    scanf(" %c", &input);
    input = toupper(input); // Ubah input ke huruf besar

    // Membaca Input pertama
    fflush(stdin);

    char *bulan[12] = {
        "Januari",
        "Februari",
        "Maret",
        "April",
        "Mei",
        "Juni",
        "Juli",
        "Agustus",
        "September",
        "Oktober",
        "November",
        "Desember"};

    int found = 0; // Memastikan Bulan Terdapat dalam Array

    // Membersihkan Layar dan Menampilkan Judul
    clearScreen();
    Judul();

    // Mencari dan menampilkan bulan-bulan yang awalannya sama dengan input
    printf("Bulan-bulan yang awalannya sama dengan '%c':\n\n", input);
    for (int i = 0; i < 12; i++)
    {

        if (input == bulan[i][0])
        {
            printf("%d. %s\n", i + 1, bulan[i]);
            found = 1;
        }
    }

    // Jika Tidak ada bulan yang sesuai input
    if (!found)
    {
        printf("Tidak ada bulan yang awalannya sama dengan '%c'\n", input);
        return 1;
    }

    // Memilih Bulan dan Memastikan Bulan Sesuai yang Muncul
    int choice;
    char *Month;
    do
    {
        printf("\nPilih bulan (masukkan nomor): ");
        if (scanf("%d", &choice) != 1 || choice < 1 || choice > 12 || input != toupper(bulan[choice - 1][0]))
        {
            printf("\nMasukan tidak valid. Pilih nomor bulan yang sesuai.\n");
            fflush(stdin); 
            continue;      
        }

        // Setelah memastikan input yang valid, atur Month
        Month = bulan[choice - 1];

    } while (choice < 1 || choice > 12 || input != toupper(bulan[choice - 1][0]));

    
    int vokal = 0;
    int nonVokal = 0;

    // Menghitung jumlah karakter vokal dan nonvokal pada bulan yang dipilih
    for (int i = 0; i < strlen(Month); i++)
    {
        char ch = toupper(Month[i]);
        if (ch == 'A' || ch == 'I' || ch == 'U' || ch == 'E' || ch == 'O')
        {
            vokal++;
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            nonVokal++;
        }
    }

    // Membersihkan Layar dan Menampilkan Judul, Bulan Dan Karakter
    clearScreen();
    Judul();
    printf("Nama bulan: %s\n", Month);
    printf("Jumlah karakter vokal: %d\n", vokal);
    printf("Jumlah karakter nonvokal: %d\n", nonVokal);

    return 0;
}
