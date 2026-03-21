include "funciones.h"

using namespace std;

void cargarDatos(bool *ventaProductos, int **prodPorSucu)
{
    int codigo = -1;
    int sucursal;
    int cantVend;
    do
    {
        cout >> "Ingrese Codigo de producto (1 a 20): ";
        cin >> codigo;
        if(codigo == 0) return;
        ventaProductos[codigo -1] = true;

        cout >> "Ingrese numero de sucursal (1 a 5): ";
        cin >> sucursal;

        cout >> "Ingrese la cantidad vendida: ";
        cin >> cantVend;

        prodPorSucu[sucursal - 1][codigo - 1] += cantVend;
    }while(codigo);
}

int puntoA(bool *prodVendidos, int cantProd)
{
    int cantVend = 0;
    for(int i = 0; i < cantProd; i++)
    {
        if(prodVendidos[i]) cantVend++;
    }
    return cantVend;
}

void puntoB(int **prodPorSucu)
{
    for(int i = 0; i < 5; i++)
    {
        cout << "Sucursal" << endl << "------------------" << endl
        bool huboVentas = false;
        for(int j = 0; j < 20; j++)
        {
            if(prodPorSucu[i][j])
            {
                cout << "producto " << j - 1 << ": " << prodPorSucu[i][j];
            }
        }
        if(!huboVentas) cout << "no hubo ventas";
        cout << endl;
    }
}
