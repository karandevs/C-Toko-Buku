// MEMASANG HEADER
#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
void header();
void mainmenu();
void pertanyaan();

int main()
{
    header();
    mainmenu();

    getch();
    return 0;
}

void header()
{
    cout << " *************************************************************\n";
    cout << " *                    PAKUAN BOOK STORE                      *\n";
    cout << " *************************************************************\n";
}

void mainmenu()
{
    int pilihan;
    float kode, harga, bayar, kembalian;
    cout << " *************************************************************\n";
    cout << " *                        GENRE BUKU                         *\n";
    cout << " *-----------------------------------------------------------*\n";
    cout << " * 1. Romance                                                *\n";
    cout << " * 2. Edukasi                                                *\n";
    cout << " * 3. Fiksi                                                  *\n";
    cout << " * 4. Non Fiksi                                              *\n";
    cout << " * 5. Horror                                                 *\n";
    cout << " *************************************************************\n";

    cout << " Masukkan pilihan anda : ";
    cin  >> pilihan;

    switch (pilihan)
    {
    case 1 :
             system("CLS");
             header();
             cout << " ************************************************************" << "****************\n";
             cout << " *                      BUKU ROMANCE                        |" << "     Harga     *\n";
             cout << " *----------------------------------------------------------|" << "---------------*\n";
             cout << " * 1. Cinta dan Senja                                       |" << " Rp. 50.000    *\n";
             cout << " * 2. Berjuta Rasanya                                       |" << " Rp. 75.000    *\n";
             cout << " * 3. Bad Romance                                           |" << " Rp. 85.000    *\n";
             cout << " * 4. Love Across Time                                      |" << " Rp. 55.000    *\n";
             cout << " * 5. Arah Langkah                                          |" << " Rp. 87.000    *\n";
             cout << " ************************************************************" << "****************\n";

             cout << " Masukkan kode Buku yang ingin dibeli : ";
             cin >> kode;
             if (kode == 1)
             {
                 system("CLS");
                 header();
                 harga = 50000;
                 cout << " Judul Buku : Cinta dan Senja\n";
                 cout << " Harga      : Rp.50.000\n";
                 cout << " Pembayaran : Rp.";
                 cin  >> bayar;

                 kembalian = bayar - harga;

                 cout << " Kembalian  : Rp." << kembalian << endl;

                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t          STRUK BELANJA          \n";
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Total     : Rp." << harga << endl;
                 cout << " \t\t\t\t Bayar     : Rp." << bayar << endl;
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Kembalian : Rp."<<kembalian<< endl;
                 cout << " \t\t\t\t---------------------------------\n";

                 pertanyaan();

             }
             else if (kode == 2)
             {
                 system("CLS");
                 header();
                 harga = 75000;
                 cout << " Judul Buku : Berjuta Rasanya\n";
                 cout << " Harga      : Rp.75.000\n";
                 cout << " Pembayaran : Rp.";
                 cin  >> bayar;

                 kembalian = bayar - harga;

                 cout << " Kembalian  : Rp." << kembalian << endl;

                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t          STRUK BELANJA          \n";
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Total     : Rp." << harga << endl;
                 cout << " \t\t\t\t Bayar     : Rp." << bayar << endl;
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Kembalian : Rp."<<kembalian<< endl;
                 cout << " \t\t\t\t---------------------------------\n";

                 pertanyaan();
             }
             else if(kode == 3)
             {
                 system("CLS");
                 header();
                 harga = 85000;
                 cout << " Judul Buku : Bad Romance\n";
                 cout << " Harga      : Rp.85.000\n";
                 cout << " Pembayaran : Rp.";
                 cin  >> bayar;

                 kembalian = bayar - harga;

                 cout << " Kembalian  : Rp." << kembalian << endl;

                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t          STRUK BELANJA          \n";
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Total     : Rp." << harga << endl;
                 cout << " \t\t\t\t Bayar     : Rp." << bayar << endl;
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Kembalian : Rp."<<kembalian<< endl;
                 cout << " \t\t\t\t---------------------------------\n";

                 pertanyaan();
             }
             else if (kode == 4)
             {
                 system("CLS");
                 header();
                 harga = 55000;
                 cout << " Judul Buku : Love Across Time\n";
                 cout << " Harga      : Rp.55.000\n";
                 cout << " Pembayaran : Rp.";
                 cin  >> bayar;

                 kembalian = bayar - harga;

                 cout << " Kembalian  : Rp." << kembalian << endl;

                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t          STRUK BELANJA          \n";
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Total     : Rp." << harga << endl;
                 cout << " \t\t\t\t Bayar     : Rp." << bayar << endl;
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Kembalian : Rp."<<kembalian<< endl;
                 cout << " \t\t\t\t---------------------------------\n";

                 pertanyaan();
             }
             else if (kode == 5)
             {
                 system("CLS");
                 header();
                 harga = 87000;
                 cout << " Judul Buku : Cinta dan Senja\n";
                 cout << " Harga      : Rp.87.000\n";
                 cout << " Pembayaran : Rp.";
                 cin  >> bayar;

                 kembalian = bayar - harga;

                 cout << " Kembalian  : Rp." << kembalian << endl;

                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t          STRUK BELANJA          \n";
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Total     : Rp." << harga << endl;
                 cout << " \t\t\t\t Bayar     : Rp." << bayar << endl;
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Kembalian : Rp."<<kembalian<< endl;
                 cout << " \t\t\t\t---------------------------------\n";

                 pertanyaan();
             }
             else
             {
                 cout << " Error";
             }
             break;

    case 2 : system("CLS");
             header();
             cout << " ****************************************************************************\n";
             cout << " *                      BUKU EDUKASI                        |     Harga     *\n";
             cout << " *----------------------------------------------------------|---------------*\n";
             cout << " * 1. Pemrograman Dasar C++                                 | Rp. 78.000    *\n";
             cout << " * 2. Visual Studio 2015                                    | Rp. 90.000    *\n";
             cout << " * 3. Java                                                  | Rp. 84.000    *\n";
             cout << " * 4. Pemrograman Mobile                                    | Rp. 97.000    *\n";
             cout << " * 5. Basis Data                                            | Rp. 86.000    *\n";
             cout << " ****************************************************************************\n";
             cout << " Masukkan kode Buku yang ingin dibeli : ";
             cin >> kode;
             if (kode == 1)
             {
                 system("CLS");
                 header();
                 harga = 78000;
                 cout << " Judul Buku : Pemrograman Dasar C++\n";
                 cout << " Harga      : Rp.78.000\n";
                 cout << " Pembayaran : Rp.";
                 cin  >> bayar;

                 kembalian = bayar - harga;

                 cout << " Kembalian  : Rp." << kembalian << endl;

                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t          STRUK BELANJA          \n";
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Total     : Rp." << harga << endl;
                 cout << " \t\t\t\t Bayar     : Rp." << bayar << endl;
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Kembalian : Rp."<<kembalian<< endl;
                 cout << " \t\t\t\t---------------------------------\n";

                 pertanyaan();

             }
             else if (kode == 2)
             {
                 system("CLS");
                 header();
                 harga = 90000;
                 cout << " Judul Buku : Visual Studio 2015\n";
                 cout << " Harga      : Rp.90.000\n";
                 cout << " Pembayaran : Rp.";
                 cin  >> bayar;

                 kembalian = bayar - harga;

                 cout << " Kembalian  : Rp." << kembalian << endl;

                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t          STRUK BELANJA          \n";
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Total     : Rp." << harga << endl;
                 cout << " \t\t\t\t Bayar     : Rp." << bayar << endl;
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Kembalian : Rp."<<kembalian<< endl;
                 cout << " \t\t\t\t---------------------------------\n";

                 pertanyaan();
             }
             else if(kode == 3)
             {
                 system("CLS");
                 header();
                 harga = 84000;
                 cout << " Judul Buku : Java\n";
                 cout << " Harga      : Rp.84.000\n";
                 cout << " Pembayaran : Rp.";
                 cin  >> bayar;

                 kembalian = bayar - harga;

                 cout << " Kembalian  : Rp." << kembalian << endl;

                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t          STRUK BELANJA          \n";
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Total     : Rp." << harga << endl;
                 cout << " \t\t\t\t Bayar     : Rp." << bayar << endl;
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Kembalian : Rp."<<kembalian<< endl;
                 cout << " \t\t\t\t---------------------------------\n";

                 pertanyaan();
             }
             else if (kode == 4)
             {
                 system("CLS");
                 header();
                 harga = 97000;
                 cout << " Judul Buku : Pemrograman Mobile\n";
                 cout << " Harga      : Rp.97.000\n";
                 cout << " Pembayaran : Rp.";
                 cin  >> bayar;

                 kembalian = bayar - harga;

                 cout << " Kembalian  : Rp." << kembalian << endl;

                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t          STRUK BELANJA          \n";
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Total     : Rp." << harga << endl;
                 cout << " \t\t\t\t Bayar     : Rp." << bayar << endl;
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Kembalian : Rp."<<kembalian<< endl;
                 cout << " \t\t\t\t---------------------------------\n";

                 pertanyaan();
             }
             else if (kode == 5)
             {
                 system("CLS");
                 header();
                 harga = 86000;
                 cout << " Judul Buku : Basis Data\n";
                 cout << " Harga      : Rp.86.000\n";
                 cout << " Pembayaran : Rp.";
                 cin  >> bayar;

                 kembalian = bayar - harga;

                 cout << " Kembalian  : Rp." << kembalian << endl;

                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t          STRUK BELANJA          \n";
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Total     : Rp." << harga << endl;
                 cout << " \t\t\t\t Bayar     : Rp." << bayar << endl;
                 cout << " \t\t\t\t---------------------------------\n";
                 cout << " \t\t\t\t Kembalian : Rp."<<kembalian<< endl;
                 cout << " \t\t\t\t---------------------------------\n";

                 pertanyaan();
             }
             else
             {
                 cout << " Error";
             }
             break;

    default:
        break;
    }
}
void pertanyaan()
{
    char tanya;
    cout << " Apakah anda ingin membeli lagi ? [Y]/[N] : ";
    cin >> tanya;
    if (tanya == 'y'; tanya == 'Y')
    {
        system ("CLS");
        header();
        mainmenu();
    }
    else
    {
        cout << " Terima kasih telah membeli Buku di Toko kami, silahkan datang kembali :)";
    }
}


