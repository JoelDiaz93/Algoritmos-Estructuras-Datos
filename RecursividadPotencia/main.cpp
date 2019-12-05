#include <iostream>
using namespace std;

int exponente(int num, int exp);

int main()
{
    int base, exp;
    cout << "POTENCIAS" << endl;
    cout << "Base: ";
    cin >> base;
    cout << "Exponente: ";
    cin >> exp;
    cout << exponente(base, exp);
    return 0;
}

int exponente(int num, int exp)
{
    int res;
    if(exp==0)
    {
        return 1;
    }
    else
    {
        return res = num * exponente(num, exp-1);
    }
}
