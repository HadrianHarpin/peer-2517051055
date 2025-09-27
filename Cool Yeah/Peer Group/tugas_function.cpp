#include <iostream>
using namespace std;

//Function "Kuadrat" yang menunjukkan x ^ 2 (x pangkat 2)
int kuadrat(int x)
{
    return (x * x);
}

//Function "Kubik" yang menunjukkan x ^ 3 (x pangkat 3)
int kubik(int x)
{
    return (x * x * x);
}

//function "Faktorial" yang menunjukka x! (x faktorial)
int faktorial(int x)
{
    int faktor = 1;

    for (int i = 1; i <= x; i++)
    {
        faktor = faktor * i;
    }
    
    return faktor;
}

int main ()
{
    int bilbul;

    cout << "Masukkan Bilangan Bulat : " ;
    cin >> bilbul;

    cout << "Hasil Kuadrat dari " << bilbul << " = " << kuadrat(bilbul) << endl;
    cout << "Hasil Kubik dari " << bilbul << " = " << kubik(bilbul) << endl;
    cout << "Hasil Faktorial dari " << bilbul << " = " << faktorial(bilbul) << endl;

    return 0;
}