#include <iostream>
#include <cstdlib>
#include "funciones.cpp"

using namespace std;

int main()
{
	int eleccion;
	int tablaPuntaje[4][4];
	do
	{
		system("cls");
		mostrarMenu();
		cin >> eleccion;
		cin.ignore(10000, '\n');
		switch(eleccion)
		{
			case 1:
				agregarPuntos(tablaPuntaje);
				break;
			case 2:
				imprimirTabla(tablaPuntaje);
				break;
			case 3:
				reiniciar(tablaPuntaje);
				break;
			case 0:
				break;
			default:
				cout << "Opcion no valida" << endl ;
				getchar();
				getchar();
				break;
		}
	}while(eleccion != 0);
	return 0;
}

