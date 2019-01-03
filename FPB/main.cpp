#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a,b,c;
    cout << "_____ Mencari Faktor Persekutuan Terbesar ______ \n \n";
    cout << "Masukkan Bilangan Pertama = ";
    cin >> a ;
    cout <<"\n \n";
    cout << "Masukkan Bilangan Kedua   = ";
    cin >> b ;
    cout <<"\n \n";
    c=a%b;
    while (c!=0)
    {
        a=b;
        b=c;
        c=a%b;
    }
    cout << "Faktor Persekutuan Terbesar dari Bilangan diatas adalah ";
    cout << b;
}
