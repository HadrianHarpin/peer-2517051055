#include <iostream>
using namespace std;

int main ()
{
    int baris;

    cout << "Masukkan Banyak Baris yang Diinginkan: " ;
    cin >> baris;

    for (int a = 1; a <= baris; a++)
    {
        for (int x = baris; x > a; x--)
        {
            cout << " " ;
        }

        for (int b = 0; b < a; b++)
        {
            cout << "*" ;

        }

        for (int c = 0; c < a - 1; c++)
        {
            cout << "*" ;
        }

        cout << endl;
    }

    return 0;
}