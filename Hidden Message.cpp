#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int panjang, k, l;
    char kalimat[55], kata[55];

    cin >> panjang;
    cin.getline( kalimat, 0 );
    for( int i = 0; i < panjang; i++ ){
        cin.getline( kalimat, 100 );
        k = 0;
        l = 0;
        for( int j = 0; j < 50; j++ ){
            if( kalimat[j] == '\0' || k == 1 ){
                break;
            }
            if( kalimat[j] >97 ){
                kata[l] = kalimat[j];
                l++;
                while( kalimat[j] != 32 ){
                    j++;
                    if( kalimat[j] == '\0' ){
                        k = 1;
                        break;
                    }
                }
            }
        }
        kata[l] = '\0';
        cout << kata << endl;
    }

    return 0;
}