#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream in("palin.in");
ofstream out("palin.out");

int cifre[10] = { 0,0,0,0,0,0,0,0,0,0 }, kCifre = 0, nr, aux, result = 0, p10;

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
    p10 = kCifre;
    for (int i = 9; i >= 0; i--) {
        if (cifre[i] != 0)
        {
            if (cifre[i] % 2 == 0) {
                for (int j = cifre[i] / 2; j >= 1; j--) {
                    result += i * int(pow(10.0, p10 - 1)) + i * int(pow(10.0, kCifre - p10));
                    p10--;
                }
            }
            else {
                for (int j = kCifre / 2 - cifre[i] / 2; j <= kCifre / 2  + cifre[i] / 2; j++)
                    result += i * int(pow(10.0, j));
            }
        }
    }
    out << result;
}
