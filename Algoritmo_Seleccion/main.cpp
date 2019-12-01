#include <iostream>
using namespace std;

void agregar(int a[], int n);
void imprimir(int a[], int n);
void menor(int a[], int n);

int main()
{
    int arreglo[5];
    agregar(arreglo, 5);
    menor(arreglo, 5);
    imprimir(arreglo, 5);
    return 0;
}

void agregar(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << i+1 <<" Numero: ";
        cin >> a[i];
    }
}
void imprimir(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void menor(int a[], int n)
{
    int aux, min;
    for (int i=0; i<n; i++)
    {
        min=i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        aux=a[i];
        a[i]=a[min];
        a[min]=aux;
    }
}
