#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
    /* 
        Bharkara's Formula
        rumus: 
        >> -b + sqrt( (b*b) - (4*c) ) / 2*a
        >> -b - sqrt( (b*b) - (4*c) ) / 2*a
        note: untuk lebih jelasnya bisa cari di google
     */

    // variabel untuk inputan
    double a, b, c;

    // inputan
    cin >> a >> b >> c;

    // mencari akar
    double akar = (b*b)-(4*a*c);
    akar = sqrt(akar);
    
    
    /* 
    kondisi:
    1. jika hasil akar > 0
    2. jika nilai a tidak 0
    tampilkan hasil
     */
    if( akar > 0 && a != 0 ){ // jika hasil akar > 0 dan nilai a tidak 0
        double x, y; // variabel untuk menyimpan hasil
        // penyelesaian
        // (-b + akar/2*a) & (-b - akar/2*a)
        x = (-b+akar)/(2*a);
        y = (-b-akar)/(2*a);

        // digunakan untuk menampilkan 5 digit angka di belakang koma
        // setprecision(); adalah standard library dari #include <iomanip>
        cout << fixed << setprecision(5);

        // menampilkan hasil
        cout << "R1 = " << x << endl;
        cout << "R1 = " << y << endl;
    } else { // jika hasil akar < 0 dan nilai a = 0
        cout << "Impossivel calcular" << endl;
    }

    return 0;
}