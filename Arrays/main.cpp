#include <iostream>
#include "funciones.h"

using namespace std;



int main()
{
    bool vendido[20];
    int prodPorSucu[5][20];
    cargarDatos(vendido, prodPorSucu);
    int prodNoVendidos = puntoA(vendido, 20);
    cout << prodNoVendidos << endl;
    return 0;
}
