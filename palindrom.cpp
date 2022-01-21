#include <iostream>
#include <fstream>

using namespace std;

ifstream in("palin.in");
ofstream out("palin.out");

int cifre[10] = { 0,0,0,0,0,0,0,0,0,0 }, kCifre = 0, nr, aux;

int main()
{
    in >> nr;
    aux = nr;
    while (aux > 0)
    {
        cifre[aux % 10]++;
        kCifre++;
        aux /= 10;
    }
    for (int i = 0; i <= 9; i++)
        cout << i << " ";
    cout << "\n";
    for (int i = 0; i <= 9; i++)
        cout << cifre[i] << " ";
}
