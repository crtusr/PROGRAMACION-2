#include <iostream>
#include "funciones.h"

using namespace std;
int main()
{
  int nDeAlumnos, mayoresAlPromedio = 0;
  float *notas = nullptr, suma = 0, promedio;

  cout << "Cuantos alumnos desea ingresar?: ";
  cin >> nDeAlumnos;

  if(nDeAlumnos <= 0)
  {
    cout << "No existen alumnos negativos" << endl;
    return 1;
  }

  notas = new float [nDeAlumnos];
  if(notas == nullptr)
  {
    cout << "Son demasiados alumnos..." << endl;
    return 2;
  }

  pedirYProcesarDatos(notas, nDeAlumnos);
  suma = sumarNotas(notas, nDeAlumnos);

  promedio = suma / (float) nDeAlumnos;

  mayoresAlPromedio = contarMayoresAlValor(notas, promedio, nDeAlumnos);
  
  cout << mayoresAlPromedio << endl;

  delete []notas;
  return 0;
}
