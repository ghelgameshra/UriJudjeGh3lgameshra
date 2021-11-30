#include <iostream>
using namespace std;
int main(){
    int num[10], input, jumlah;
    cin >> input;
    num[0] = input;
    cout << "N[" << 0 << "] = " << num[0] << endl;
    for( int i = 1; i < 10; i++ ){
        num[i] = num[i-1] + num[i-1];
    }
    for( int i = 1; i < 10; i++ ){
        cout << "N[" << i << "] = " << num[i] << endl;
    }    
    return 0;
}