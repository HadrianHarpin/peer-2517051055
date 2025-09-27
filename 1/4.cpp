#include <iostream>
using namespace std;

int main ()
{
    int x;
    int hasil = 1;

    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        hasil = hasil * i;
    }
    cout << hasil;

    return 0;
}