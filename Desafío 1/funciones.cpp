#include "funciones.h"
#include <iostream>
#include <iomanip>

using namespace std;

void mostrarMenu()
{
	cout << "1 - Cargar Puntos" << endl;
	cout << "\tPide el numero de dos jugadores que se enfrentaron y sus respectivos puntos" << endl;	
	cout << "2 - Mostrar Tabla" << endl;
	cout << "\tMuestra la tabla de enfrentamientos" << endl;
	cout << "3 - Reiniciar Campeonato" << endl;  cout << "\tBorra los resultados y deja todo en cero" << endl;
	cout << "0 - Salir" << endl;
	cout << "\tCierra el programa" << endl;
	
	return;
}

void agregarPuntos(int tabla[][4])
{
	int jug1, puntos1;
	int jug2, puntos2;
	
	cout << "Primer jugador: ";
	cin >> jug1;
	cout << "Segundo jugador: ";
	cin >> jug2;
	cin.ignore(10000, '\n');
	if(jug1 == jug2)
	{
		cout << "No se puede jugar contra si mismo, abortando." << endl;
		getchar();
		return;
	}
	else if(jug1 > 4 || jug2 > 4 || jug1 < 1 || jug2 < 1)
	{
		cout << "No eligió un jugador valido, abortando." << endl;
		getchar();
		return;
	}
	cout << "puntos del primer jugador: ";
	cin >> puntos1;
	cout << "puntos del segundo jugador: ";
	cin >> puntos2;
	tabla[jug1 - 1][jug2 - 1] += puntos1;
	tabla[jug2 - 1][jug1 - 1] += puntos2;
	
	return;
}
void imprimirTabla(int tabla[][4])
{
	system("cls");
	cout << "   ";
	for(int i = 0; i < 4; i++)
	{
		cout << "J" << i + 1 << " ";
	}
	cout << endl;
	for(int i = 0; i < 4; i++)
	{
		cout << "J" << i + 1 << " ";
		for(int j = 0; j < 4; j++)
		{
			if(i != j)
			{
				cout << setw(2) << tabla[i][j] << " ";
			}
			else
			{
				cout << " - ";
			}
		}
		cout << endl;
	}
	getchar();
	return;
}

void reiniciar(int tabla[][4])
{
	system("cls");
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			tabla[i][j] = 0;
		}
	}
	cout << "Comienza una partida nueva" << endl;
	getchar();
	return;
}
