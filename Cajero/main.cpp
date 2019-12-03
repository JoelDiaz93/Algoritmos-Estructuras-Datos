#include <iostream>
using namespace std;

int main()
{
    int opcion=1, tam=100, cont=0;
    int arreglo[tam];

    while(opcion != 0)
    {
        cout << "BIENVENIDO A SU BANCO DE BARRIO"<< endl;
        cout << "1- Ingresar dinero" << endl;
        cout << "2- Ordenar menor a mayor" << endl;
        cout << "3- Ordenar mayor a menor" << endl;
        cout << "4- Suma de elementos impares" << endl;
        cout << "5- Suma de elementos pares" << endl;
        cout << "0- Salir" << endl;
        cout << "Ingrese opcion: ";
        cin >> opcion;
        cout << endl;
        switch(opcion)
        {
        case 1:
            {
                cout << "Solo ingresar numeros mayores a 0,\n CASO CONTRARIO REGRESA AL MENU " << endl;
                int deposito=1;
                while(deposito>0)
                {
                    cout << "Cuanto desea depositar?";
                    cin >> deposito;
                    if(deposito>0)
                    {
                        arreglo[cont]=deposito;
                        cont++;
                    }
                }
                cout << endl;
                break;
            }
        case 2:
            {
                cout << "Se ha ordenado sus depositos de menor a mayor:" << endl;
                int aux, min;
                for (int i=0; i<cont; i++)
                {
                    min=i;
                    for(int j=i+1; j<cont; j++)
                    {
                        if(arreglo[j]<arreglo[min])
                        {
                            min=j;
                        }
                    }
                    aux=arreglo[i];
                    arreglo[i]=arreglo[min];
                    arreglo[min]=aux;
                }
                for(int i=0; i<cont; i++)
                {
                    cout << arreglo[i]<< endl;
                }
                cout << endl;
                break;
            }
        case 3:
            {
                cout << "Se ha ordenado sus depositos de mayor a menor:" << endl;
                int aux, max;
                for (int i=0; i<cont; i++)
                {
                    max=i;
                    for(int j=i+1; j<cont; j++)
                    {
                        if(arreglo[j]>arreglo[max])
                        {
                            max=j;
                        }
                    }
                    aux=arreglo[i];
                    arreglo[i]=arreglo[max];
                    arreglo[max]=aux;
                }
                for(int i=0; i<cont; i++)
                {
                    cout << arreglo[i]<< endl;
                }
                cout << endl;
                break;
            }
        case 4:
            {
                int sumaI=0;
                cout << "La suma de los elemento impares es: ";
                for(int i=0; i<cont; i++)
                {
                    if(arreglo[i]%2!=0)
                    {
                        sumaI=sumaI+arreglo[i];
                    }
                }
                cout << sumaI << endl;
                cout << endl;
                break;
            }
        case 5:
            {
                int sumaP=0;
                cout << "La suma de los elemento pares es: ";
                for(int i=0; i<cont; i++)
                {
                    if(arreglo[i]%2==0)
                    {
                        sumaP=sumaP+arreglo[i];
                    }
                }
                cout << sumaP << endl;
                cout << endl;
                break;
            }
        default:
            {
                cout << "No se reconoce opcion ingresada..." << endl;
                cout << endl;
                break;
            }
        }
    }
    return 0;
}

void agregar(int a[], int n)
{
    char op='s';
    while(op=='s')
    {
        cout << "Cuanto desea depositar? ";
        cin >> a[n];
        cout << "(s) Para realizar otro deposito, cuaquier otro finalizar";
        cin >> op;
        if(op=='s')
        {
            n++;
        }
    }
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
    for(int i; i<=n; i++)
    {
        cout << a[i]<< endl;
    }
}
