#include <iostream>
using namespace std;

int main ()
{
    int baris;

    cout << "Masukkan Banyak Baris yang Diinginkan: " ;
    cin >> baris;

    for (int a = 1; a <= baris; a++)
    {
        for (int b = baris; b > a; b--)
        {
            cout << " " ;
        }

        for (int c = 0; c < a; c++)
        {
            cout << "*" ;
        }

        cout << endl;
    }

    return 0;
}