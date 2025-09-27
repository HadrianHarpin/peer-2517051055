#include <iostream>
using namespace std;

int main ()
{
    char arr[5] = {'a','b','c','d','e'};

    int i = 0;
    while(i < 5 && arr[i] != 'c')
    {
        cout << "index " << i << " = " << arr[i] << endl;
        i++;
    }

    return 0;
} 