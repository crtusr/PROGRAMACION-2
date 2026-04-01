#include<iostream>
#include"funciones.h"

using namespace std;

static int sumarFila(int matriz[5][6], int fila)
{
  int resultado = 0;
  for(int i = 0; i < 6; i++)
  {
    resultado += matriz[fila][i];
  }
  return resultado;
}

void mostrarSumaFilasMatriz(int matriz[5][6])
{
  for(int i = 0; i < 5; i++)
  {
    cout << i + 1 << " suma: " << sumarFila(matriz, i) << endl;
  }
}
