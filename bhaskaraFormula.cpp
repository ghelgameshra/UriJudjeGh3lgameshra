#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
    double a, b, c, belum_akar, akar;
    cin >> a >> b >> c;
    akar = (b*b)-(4*a*c); // belum bentuk akar
    
    /* 
    syarat :
    1. jika nilai dalam akar bernilai negatif, tampilkan pesan "Impossivel calcular"
    2. jika a = 0, tampilkan pesan "Impossivel calcular"
     */

    if( akar > 0 && a != 0 ){
        // mencari hasil akar
        akar = sqrt(akar);
        double x, y;

        // penyelesaian rumus
        x = (-b + akar)/(2*a);
        y = (-b - akar)/(2*a);

        // menampilkan hasil
        cout << fixed << setprecision(5);
        cout << "R1 = " << x << endl;
        cout << "R2 = " << y << endl;


    } else { // jika nilai a = 0 atau hasil dari nilai akar negatif
        cout << "Impossivel calcular" << endl;
    }



    return 0;
}
