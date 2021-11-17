#include <iostream>
using namespace std;
int main()
{
    /* 
    kondisi :
    1. jika b > c
    2. jika d > a
    3. jika c+d > a+b
    4. jika a bilangan positif
    5. jika a bilangan genap
    tulis Valores aceitos
     */

    int a, b, c, d; // variabel untuk inputan
    cin >> a >> b >> c >> d;

    if ((b > c) && (d > a) && (c + d > a + b) && (a > 0) && (a % 2 == 0))
    {
        cout << "Valores aceitos\n";
    }
    else
    {
        cout << "Valores nao aceitos\n";
    }

    return 0;
}
