#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;
int pass;
/* var ada */
int ada;
int dari_tabung;
/* var ada */

/* Prototipe fungsi */
void tampil_menu_luas();
void tampil_menu_keliling();
void tampil_menu_volume();
void nama_saya();
void hapusTampilan();
void sparatorA();
void sparatorB();
int pilih_menu();
int pilih_menu_luas();
int pilih_menu_keliling();
int pilih_menu_volume();
int kembali_menu_vol();
double luas_segitiga();
double luas_persegiPanjang();
double luas_persegi();
double luas_lingkaran();
double kel_segitiga();
double kel_persegiPanjang();
double kel_persegi();
double kel_lingkaran();
double vol_tabung();
/* Prototipe fungsi */
int hitung_mundur(){
    clock_t startTime = clock(); //Start timer
    double secondsPassed;
    double secondsToDelay = 5; // time delay
    cout << "Try again in: " << secondsToDelay <<  "s" << endl;
    bool flag = true;
    while (flag)
    {
        secondsPassed = (clock() - startTime) / CLOCKS_PER_SEC;
        if (secondsPassed >= secondsToDelay)
        {
            cout << secondsPassed << " seconds have passed" << endl;
            flag = false;
        }
    }
    return secondsPassed;
}

int passCode(){
    string sandi_saya = "990";
    string sandi_tamu = "000";
    string code;
    for( int i=0;  code != sandi_tamu && code != sandi_saya; ){
        cout << "Enter passCode: ";
        cin >> code;
        i += i;
        if( code == sandi_tamu && i <=3 ){
            cout << "Anda Masuk Sebagai Tamu\n";
            sparatorA();
        } else if( code == sandi_saya && i <= 3 ){
            nama_saya();
        } else if ( i > 3 ){
            hapusTampilan();
            i -= i;
            hitung_mundur();
        }
        i++;
    }
    return 0;
}
void sparatorA(){
    cout << "------------------------\n";
}
void sparatorB(){
    cout << "========================\n";
}
void codeBy(){
    hapusTampilan();

    sparatorB();
    cout << "This is a simple program\n";
    cout << "Made by: Gh3lg4meshra\n";
    sparatorA();
    cout << "needSomeCoffe.to.Write\n";
    cout << "Tested on: Kali GNU/Linux Rolling x86_64\n";
    cout << "Debian ver: Debian 5.10.46-4kali1 (2021-08-09) x86_64 GNU/Linux\n";
    cout << "With compiler: g++ (Debian 10.3.0-9) 10.3.0\n";
    sparatorB();
}
void hapusTampilan(){
    system("cls");
}
void nama_saya(){
    string nama, nim, prodi;
    nama = "Rizky Andriawan";
    nim = "21552021033";
    prodi = "Teknik Informatika";

    // outputan
    cout << "Nama: " << nama << endl;
    cout << "NIM: " << nim << endl;
    cout << "Prodi: " << prodi << endl;
}
void tampil_menu(){
    cout << "[1] Program Cari Luas\n";
    cout << "[2] Program Cari Keliling\n";
    cout << "[3] Program Cari Voume\n";
    cout << "[0] Keluar\n";
}
void petunjuk_menu_ke_luas(){
    cout << "Program >> Cari Luas \n";
}
void petunjuk_menu_ke_kel(){
    cout << "Program >> Cari Keliling \n";
}
void petunjuk_menu_ke_vol(){
    cout << "Program >> Cari Volume \n";
}

int kembali_ke_menu_luas(){
    string pilih;
    for( int i=0; pilih != "8" && pilih != "9" && pilih != "0"; ){
        cout << endl;
        cout << "[8] Ulang   |   [9] Kembali   |   [0] Keluar\n";
        cout << "Pilih > ";
        cin >> pilih;
        if( pilih == "8" ){
            luas_segitiga();
        } else if( pilih == "9" ){

            // masuk ke menu luas
            hapusTampilan();
            cout << "Program >> Cari Luas >> \n";
            sparatorA();
            tampil_menu_luas();
            pilih_menu_luas();
        } else if( pilih == "0" ){
            cout << "Program ended\n";
            return 0;
        } else {
            cout << "Warning: Invalid input!\n";
            break;
        }
        i++;
    }
    return 0;
}

int kembali_ke_menu_luas1(){
    string pilih;
    for( int i=0; pilih != "8" && pilih != "9" && pilih != "0"; ){
        cout << endl;
        cout << "[8] Ulang   |   [9] Kembali   |   [0] Keluar\n";
        cout << "Pilih > ";
        cin >> pilih;
        if( pilih == "8" ){
            luas_persegiPanjang();
        } else if( pilih == "9" ){

            // masuk ke menu luas
            hapusTampilan();
            cout << "Program >> Cari Luas >> \n";
            sparatorA();
            tampil_menu_luas();
            pilih_menu_luas();
        } else if( pilih == "0" ){
            cout << "Program ended\n";
            return 0;
        } else {
            cout << "Warning: Invalid input!\n";
            break;
        }
        i++;
    }
    return 0;
}

int kembali_ke_menu_luas2(){
    string pilih;
    for( int i=0; pilih != "8" && pilih != "9" && pilih != "0"; ){
        cout << endl;
        cout << "[8] Ulang   |   [9] Kembali   |   [0] Keluar\n";
        cout << "Pilih > ";
        cin >> pilih;
        if( pilih == "8" ){
            luas_persegi();
        } else if( pilih == "9" ){

            // masuk ke menu luas
            hapusTampilan();
            cout << "Program >> Cari Luas >> \n";
            sparatorA();
            tampil_menu_luas();
            pilih_menu_luas();
        } else if( pilih == "0" ){
            cout << "Program ended\n";
            return 0;
        } else {
            cout << "Warning: Invalid input!\n";
            break;
        }
        i++;
    }
    return 0;
}

int kembali_ke_menu_luas3(){
    string pilih;
    for( int i=0; pilih != "8" && pilih != "9" && pilih != "0"; ){
        cout << endl;
        cout << "[8] Ulang   |   [9] Kembali   |   [0] Keluar\n";
        cout << "Pilih > ";
        cin >> pilih;
        if( pilih == "8" ){
            luas_lingkaran();
        } else if( pilih == "9" ){

            // masuk ke menu luas
            hapusTampilan();
            cout << "Program >> Cari Luas >> \n";
            sparatorA();
            tampil_menu_luas();
            pilih_menu_luas();
        } else if( pilih == "0" ){
            cout << "Program ended\n";
            return 0;
        } else {
            cout << "Warning: Invalid input!\n";
            break;
        }
        i++;
    }
    return 0;
}


/* Rumus luas */
double luas_segitiga(){
    hapusTampilan();
    cout << "Program >> Cari Luas >> Luas Segitiga\n";
    sparatorA();
    cout << "Rumus: L = 1/2 x alas x tinggi\n";
    sparatorB();

    // mencari luas
    double a, t, luas;
    cout << "Masukkan alas: ";
    cin >> a;
    cout << "Masukkan tinggi: ";
    cin >> t;
    luas = 0.5*a*t;
    cout << "Luas segitiga: " << luas << endl;

    kembali_ke_menu_luas();

    return luas;
}

double luas_persegiPanjang(){
    hapusTampilan();
    cout << "Program >> Cari Luas >> Luas Persegi Panjang\n";
    sparatorA();
    cout << "Rumus: L = panjang x lebar\n";
    sparatorB();

    // mencari luas
    double p, l, luas;
    cout << "Masukkan panjang: ";
    cin >> p;
    cout << "Masukkan lebar: ";
    cin >> l;
    luas = p*l;
    cout << "Luas persegi panjang: " << luas << endl;

    kembali_ke_menu_luas1();

    return luas;
}

double luas_persegi(){
    hapusTampilan();
    cout << "Program >> Cari Luas >> Luas Persegi\n";
    sparatorA();
    cout << "Rumus: L = sisi x sisi\n";
    sparatorB();

    // mencari luas
    double p, luas;
    cout << "Masukkan sisi: ";
    cin >> p;
    luas = p*p;
    cout << "Luas persegi panjang: " << luas << endl;

    kembali_ke_menu_luas2();

    return luas;
}

double luas_lingkaran(){
    hapusTampilan();
    double r, t, luas, vol;
    double phi = 3.14159;
    if( dari_tabung == 1 ){
        cout << "Program >> Cari Volume >> Volume tabung\n";
        sparatorA();
        cout << "Rumus: V = phi x r x r x t\n";
        sparatorB();

        cout << "Masukkan jari-jari: ";
        cin >> r;
        luas = phi*r*r;
        cout << "Luas lingkaran: " << luas << endl;

        cout << "Masukkan tinggi tabung: ";
        cin >> t;
        vol = luas*t;
        cout << "Volume tabung: " << vol << endl;

        kembali_menu_vol();

        return luas;
    }
    cout << "Program >> Cari Luas >> Luas Lingkaran\n";
    sparatorA();
    cout << "Rumus: L = phi x r x r\n";
    sparatorB();

    // mencari luas
    
    cout << "Masukkan jari-jari: ";
    cin >> r;
    luas = phi*r*r;
    cout << "Luas lingkaran: " << luas << endl;
    kembali_ke_menu_luas3();

    return luas;
}

/* Rumus luas */



/* Rumus keliling */
int kembali_menu_kel(){
    string pilih;
    for( int i = 0; pilih != "8" && pilih != "9" && pilih != "0"; ){
        cout << endl;
        cout << "[8] Ulang  |  [9] Kembali  |  [0] Keluar\n";
        cout << "Pilih > ";
        cin >> pilih;
        if( pilih == "8" ){
            if( ada == 1 ){
                kel_persegiPanjang();
            } else if( ada == 2 ){
                kel_persegi();
            } else if( ada == 3 ){
                kel_lingkaran();
            }
        } else if( pilih == "9" ){
            // masuk ke menu keliling
            hapusTampilan();
            cout << "Program >> Cari Keliling >> \n";
            sparatorA();
            tampil_menu_keliling();
            pilih_menu_keliling();
        } else if( pilih == "0" ){
            cout << "Program ended!\n";
        } else {
            cout << "Warning: Invalid input!\n";
        }
        i++;
    }

    return 0;
}


double kel_segitiga(){
    return 0; 
}

double kel_persegiPanjang(){
    hapusTampilan();
    cout << "Program >> Cari Keliling >> Keliling Persegi Panjang\n";
    sparatorA();
    cout << "Rumus: K = 2 x (panjang x lebar)\n";
    sparatorB();

    // mencari keliling
    double p, l, kel;
    cout << "Masukkan panjang: ";
    cin >> p;
    cout << "Masukkan lebar: ";
    cin >> l;
    kel = 2*(p+l);
    cout << "Keliling: " << kel << endl;

    ada = 1;
    kembali_menu_kel();
    return kel;
}

double kel_persegi(){
    hapusTampilan();
    cout << "Program >> Cari Keliling >> Keliling Persegi\n";
    sparatorA();
    cout << "Rumus: K = 4 x sisi\n";
    sparatorB();

    // mencari keliling
    double p, l, kel;
    cout << "Masukkan sisi: ";
    cin >> p;
    kel = 4*p;
    cout << "Keliling: " << kel << endl;

    ada = 2;
    kembali_menu_kel();
    return kel;
}

double kel_lingkaran(){
    hapusTampilan();
    cout << "Program >> Cari Luas >> Keliling Lingkaran\n";
    sparatorA();
    cout << "Rumus: K = 2 x phi x r\n";
    sparatorB();

    // mencari luas
    double r, kel;
    double phi = 3.14159;
    cout << "Masukkan jari-jari: ";
    cin >> r;
    kel = phi*r*r;
    cout << "Luas persegi panjang: " << kel << endl;

    ada = 3;
    kembali_menu_kel();

    return kel;
}

void tampil_menu_keliling(){
    cout << "[1] Cari Keliling Segitiga (Already soon)\n";
    cout << "[2] Cari Keliling Persegi Panjang\n";
    cout << "[3] Cari Keliling Persegi\n";
    cout << "[4] Cari Keliling Lingkaran\n";
    cout << "[9] Kembali\n";
    cout << "[0] Keluar\n";
}
int pilih_menu_keliling(){
    string pilih;
    for( int i = 0; pilih != "1" && pilih != "2" && pilih != "3"  && pilih != "4" && pilih != "9" && pilih != "0"; ){
        cout << "Pilih > ";
        cin >> pilih;
        if( pilih == "1" ){
            // menjalankan program luas segitiga

            kel_segitiga();
        } else if( pilih == "2" ){
            // menjalankan program luas persegi panjang

            kel_persegiPanjang();
        } else if( pilih == "3" ){
            // menjalankan program luas persegi panjang

            kel_persegi();
        } else if( pilih == "4" ){
            // menjalankan program luas lingkaran

            kel_lingkaran();
        } else if( pilih == "9" ){
            hapusTampilan();

            // kembali ke menu utama
            cout << "Program >> \n";
            sparatorA();
            tampil_menu();
            pilih_menu();
        } else if( pilih == "0" ){
            cout << "Program ended!\n";
            return 0;
        } else {
            cout << "Warning: Invalid input!\n";
        }
        i++;
    }
    return 0;
}



/* Rumus keliling */


/* Rumus volume */
double vol_kubus(){
    double p, vol;
    hapusTampilan();
    cout << "Program >> Cari Volume >> Volume Kubus\n";
    sparatorA();
    cout << "Rumus: V = sisi x sisi x sisi\n";
    sparatorB();

    // mencari volume
    cout << "Masukkan sisi: ";
    cin >> p;

    vol = p*p*p;
    cout << "Volume kubus: " << vol << endl;

    ada = 1;
    kembali_menu_vol();
    return vol;
}
double vol_balok(){
    double p, l, t, vol;
    hapusTampilan();
    cout << "Program >> Cari Volume >> Volume Balok\n";
    sparatorA();
    cout << "Rumus: V = panjang x lebar x tinggi\n";
    sparatorB();

    // mencari volume
    cout << "Masukkan panjang: ";
    cin >> p;
    cout << "Masukkan lebar: ";
    cin >> l;
    cout << "Masukkan tinggi: ";
    cin >> t;

    vol = p*l*t;
    cout << "Volume kubus: " << vol << endl;

    ada = 2;
    kembali_menu_vol();
    return vol;
}
double vol_bola(){
    double vol;
    return vol;
}
double vol_tabung(){
    double vol;
    dari_tabung = 1;
    ada = 4;
    luas_lingkaran();
    return vol;
}


int kembali_menu_vol(){
    string pilih;
    for( int i = 0; pilih != "8" && pilih != "9" && pilih != "0"; ){
        cout << endl;
        cout << "[8] Ulang  |  [9] Kembali  |  [0] Keluar\n";
        cout << "Pilih > ";
        cin >> pilih;
        if( pilih == "8" ){
            if( ada == 1 ){
                vol_kubus();
            } else if( ada == 2 ){
                vol_balok();
            } else if( ada == 3 ){
                // kel_lingkaran();
            } else if( ada == 4 ){
                vol_tabung();
            }
        } else if( pilih == "9" ){
            // masuk ke menu keliling
            hapusTampilan();
            cout << "Program >> Cari Keliling >> \n";
            sparatorA();
            tampil_menu_volume();
            pilih_menu_volume();
        } else if( pilih == "0" ){
            cout << "Program ended!\n";
        } else {
            cout << "Warning: Invalid input!\n";
        }
        i++;
    }
    return 0;
}

void tampil_menu_volume(){
    cout << "[1] Cari Volume Kubus\n";
    cout << "[2] Cari Volume Balok\n";
    cout << "[3] Cari Volume Bola (Already soon)\n";
    cout << "[4] Cari Volume Tabung\n";
    cout << "[9] Kembali\n";
    cout << "[0] Keluar\n";
}
int pilih_menu_volume(){
    string pilih;
    for( int i = 0; pilih != "1" && pilih != "2" && pilih != "3" && pilih != "4" && pilih != "9" && pilih != "0"; ){
        cout << "Pilih > ";
        cin >> pilih;
        if( pilih == "1" ){
            vol_kubus();
        } else if( pilih == "2" ){
            vol_balok();
        } else if( pilih == "3" ){
            vol_bola();
        } else if( pilih == "4" ){
            vol_tabung();
        } else if( pilih == "9" ){
            hapusTampilan();

            // kembali ke menu utama
            cout << "Program >> \n";
            sparatorA();
            tampil_menu();
            pilih_menu();
        } else if( pilih == "0" ){
            cout << "Program ended!\n";
            return 0;
        } else {
            cout << "Warning: Invalid input!\n";
        }
        i++;
    }
    return 0;
}

/* Rumus volume */


// menu utama 
int pilih_menu(){
    string pilih;

    // jika inputan tidak ada dalam pilihan, maka pilihan diulang
    for( int i = 0; pilih != "1" && pilih != "2" && pilih != "3" && pilih != "0";){
        cout << "Pilih > ";
        cin >> pilih;
        if( pilih == "1" ){ 

            // jika pilihan [1], masuk ke ke menu pilih cari luas
            hapusTampilan();
            petunjuk_menu_ke_luas();
            sparatorA();

            // masuk ke menu luas
            tampil_menu_luas();
            pilih_menu_luas();
        } else if( pilih == "2" ){

            // jika pilihan [2], masuk ke ke menu pilih cari keliling
            hapusTampilan();
            petunjuk_menu_ke_kel();
            sparatorA();

            tampil_menu_keliling();
            pilih_menu_keliling();
        } else if( pilih == "3" ){

            // jika pilihan [3], masuk ke ke menu pilih cari volume
            hapusTampilan();
            petunjuk_menu_ke_vol();
            sparatorA();

            tampil_menu_volume();
            pilih_menu_volume();
        } else if( pilih == "0" ){

            // // jika pilihan [0], keluar dari program
            cout << "Program ended!\n";
            return 0;
        } else {

            // // jika pilihan tidak ada, munculkan warning!
            cout << "Warning: Invalid input!\n";
        }
        i++;
    }
    return 0;
}

// menu luas
void tampil_menu_luas(){
    cout << "[1] Cari Luas Segitiga\n";
    cout << "[2] Cari Luas Persegi Panjang\n";
    cout << "[3] Cari Luas Persegi\n";
    cout << "[4] Cari Luas Lingkaran\n";
    cout << "[9] Kembali\n";
    cout << "[0] keluar\n";
}
int pilih_menu_luas(){
    string pilih;
    for( int i = 0; pilih != "1" && pilih != "2" && pilih != "3"  && pilih != "4" && pilih != "9" && pilih != "0"; ){
        cout << "Pilih > ";
        cin >> pilih;
        if( pilih == "1" ){
            // menjalankan program luas segitiga

            luas_segitiga();
        } else if( pilih == "2" ){
            // menjalankan program luas persegi panjang

            luas_persegiPanjang();
        } else if( pilih == "3" ){
            // menjalankan program luas persegi panjang

            luas_persegi();
        } else if( pilih == "4" ){
            // menjalankan program luas lingkaran

            luas_lingkaran();
        } else if( pilih == "9" ){
            hapusTampilan();

            // kembali ke menu utama
            cout << "Program >> \n";
            sparatorA();
            tampil_menu();
            pilih_menu();
        } else if( pilih == "0" ){
            cout << "Program ended!\n";
            return 0;
        } else {
            cout << "Warning: Invalid input!\n";
        }
        i++;
    }
    return 0;
}




int main(){
    // verifikasi dengan code
    passCode();

    cout << endl;
    cout << "Program >> \n";
    sparatorA();
    tampil_menu();
    pilih_menu();
    
    // tampilkan credit/ code
    string pilih;
    for( int i = 0; pilih != "y" && pilih != "n"; ){
        cout << "Lanjut ?[y/n] > ";
        cin >> pilih;
        if( pilih == "y" ){
            codeBy();
        } else if( pilih == "n" ){
            break;
            return 0;
        } else {
            cout << "Thank's \n";
            return 0;
        }
        i++;
    }


    return 0;
}