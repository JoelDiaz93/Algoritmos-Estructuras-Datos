#include <iostream>
#include <string>
using namespace std;

const int Max=12;
typedef int mArray[Max];
typedef enum {Enero, Febrero, Marzo, Abril, Mayo, Junio, Julio, Agosto, Septiembre, Octubre, Noviembre, Diciembre} tMes;

string mes(int i);

int main()
{
    int opcion=1;
    mArray ahorros;
    tMes nmes=Enero;
    while(opcion != 0)
    {
        cout << "AHORROS JUANITO"<< endl;
        cout << "1- Depositar dinero" << endl;
        cout << "2- Consultar dinero" << endl;
        cout << "0- Salir" << endl;
        cout << "Ingrese opcion: ";
        cin >> opcion;
        cout << endl;
        switch (opcion)
        {
        case 1:
            {
                for(int i=0; i<Max; i++)
                {
                    nmes = tMes(i);
                    cout << "Deposito del mes de " << mes(nmes) << ": ";
                    cin >> ahorros[i];
                }
                cout << endl;
                break;
            }
        case 2:
            {
                for(int i=0; i<Max; i++)
                {
                    nmes = tMes(i);
                    cout << "Ahorro del mes de " << mes(nmes) << ": " << ahorros[i] << endl;
                }
                cout << endl;
                break;
            }
        default:
            {
                cout << "Opcion no valida vuelva a intentar..." << endl;
                cout << endl;
                break;
            }
        }
    }

    return 0;
}

string mes(int i)
{
    string res;
    if(i==Enero)
    {
        res="Enero";
    }
    if(i==Febrero)
    {
        res="Febrero";
    }
    if(i==Marzo)
    {
        res="Marzo";
    }
    if(i==Abril)
    {
        res="Abril";
    }
    if(i==Mayo)
    {
        res="Mayo";
    }
    if(i==Junio)
    {
        res="Junio";
    }
    if(i==Julio)
    {
        res="Julio";
    }
    if(i==Agosto)
    {
        res="Agosto";
    }
    if(i==Septiembre)
    {
        res="Septiembre";
    }
    if(i==Octubre)
    {
        res="Octubre";
    }
    if(i==Noviembre)
    {
        res="Noviembre";
    }
    if(i==Diciembre)
    {
        res="Diciembre";
    }
    return res;
}
