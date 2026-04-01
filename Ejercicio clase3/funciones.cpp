#include <iostream>
#include "funciones.h"

using namespace std;

void pedirYProcesarDatos(float *notas, int nDeAlumnos)
{
  for(int i = 0; i < nDeAlumnos; i++)
  {
    cout << "Alumno" << i + 1 << ": ";
    cin >> notas[i];
  }
}

float sumarNotas(float *notas, int nDeAlumnos)
{
  float suma = 0;
  for(int i = 0; i < nDeAlumnos; i++)
  {
    suma += notas[i];
  }
  return suma;
}

int contarMayoresAValor(float *notas, float promedio, int nDeAlumnos)
{
  int mayoresAlPromedio = 0;
  for(int i = 0; i < nDeAlumnos; i++)
  {
    if(notas[i] > promedio)
    {
      mayoresAlPromedio++;
    }
  } 
  return mayoresAlPromedio;
}

