#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    double P;
    double S;
    int k, i;
    P = 1;
    k = 1;
    while (k <= 25)

    {
        S = 0;
        i = 3;
        while (i <= k)

        {
            S += sqrt(i * i + P * k) / i ;
            i++;

        }
        P *= k;
        k++;

    }
    cout << P << endl;
    P = 1;
    k = 1;
    do
    {
        S = 0;
        i = 3;
        do
        {
            S += sqrt(i * i + P * k) / i;
            i++;
        } while (i <= k);
        P *=  k;
        k++;
    } while (k <= 25);
    cout << P << endl;
    P = 1;
    for (k = 1; k <= 25; k++)

    {
        S = 0;
        for (i = 3; i <= k; i++)

        {
            S += sqrt(i * i + P * k) / i;

        }
        P *=  k;

    }
    cout << P << endl;
    P = 1;
    for (k = 25; k >= 1; k--)

    {
        S = 0;
        for (i = k; i >= 1; i--)

        {
            S += sqrt(i * i + P * k) / i;

        }
        P *=  k;
    }
    cout << P << endl;
    return 0;
}