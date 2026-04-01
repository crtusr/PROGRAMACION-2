#include "funciones.h"


int main()
{
  int matriz[5][6] = 
  {
    {1, 2, 3, 4, 5, 6},
    {10, 20, 30, 40, 50, 60},
    {11, 22, 33, 44, 55, 66},
    {1, 1, 1, 1, 1, 1},
    {-1, -2, -3, -4, -5, -6}
  };

  mostrarSumaFilasMatriz(matriz);
  return 0;

}
