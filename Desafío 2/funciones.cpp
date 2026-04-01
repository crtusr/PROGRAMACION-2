#include<iostream>
#include "funciones.h"

int maximo(int *vec, int tam)
{
  int max = vec[0];
  int maxIndice = 0;
  for(int i = 1; i < tam; i++)
  {
    if(vec[i] > max)
    {
      max = vec[i];
      maxIndice = i;
    }
  }
  return maxIndice;
}

int contarModalidad(Alumno *alumno, int modalidad, int tam)
{
  int cuenta = 0;
  for(int i = 0; i < tam; i++)
  {
    if(alumno[i].getModalidad() == modalidad) cuenta++;
  }
  return cuenta;
}

int contarModYLlamado(Alumno *alumno, int llamado, int modalidad, int tam)
{
  int cuenta = 0;
  for(int i = 0; i < tam; i++)
  {
    if(alumno[i].getModalidad() == modalidad && alumno[i].getLlamado() == llamado) cuenta++;
  }
  return cuenta;
}

//solucion 1 del punto 4
static int contarElementos(int *arr, int valor, int tam)
{
  if(valor == 0) return 0;
  int cuenta = 0;
  for(int i = 0; i < tam; i++)
  {
    if(arr[i] == valor)
      cuenta++;
  }
  return cuenta;
}

static void ponerValorEnCero(int *arr, int buscado, int tam)
{
  if(buscado == 0) return;
  for(int i = 0; i < tam; i++)
  {
    if(arr[i] == buscado) 
      arr[i] = 0;
  }
  return;
}


int repetidos(Alumno *alumno, int cantAlumnos)
{
  int repetidos = 0;
  int *legajos = new int [cantAlumnos];
  for(int i = 0; i < cantAlumnos; i++)
  {
    legajos[i] = alumno[i].getLegajo();
  }
  for(int i = 0; i < cantAlumnos; i++)
  {
    if(contarElementos(legajos, legajos[i], cantAlumnos) > 1)
    {
      ponerValorEnCero(&legajos[i], legajos[i], cantAlumnos);
      repetidos++;
    }
  }
  delete [] legajos;
  return repetidos;
}

//solucion 2 del punto 4
int repetidosV2(Alumno *alumno, int cantAlumnos)
{
  int repetidos = 0; 
  bool encontrado;
  for(int i = 0; i < cantAlumnos; i++)
  {
    encontrado = false;
    for(int j = 0; j < i && !encontrado; j++)
    {
      if(alumno[i].getLegajo() == alumno[j].getLegajo())
      {
        encontrado = true;
      }
    }
    if(!encontrado)
    {
      for(int j = i+1; j < cantAlumnos && !encontrado; j++)
      {
        if(alumno[i].getLegajo() == alumno[j].getLegajo())
        {
          encontrado = true;
          repetidos++;
        }
      }
    }
  }
  return repetidos;
}

//Solucion 3 del punto 4

static void intercambiar(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
  return;
}

static void ordenar(int *arr, int tam)
{
  int posDelMin;
  for(int i = 0; i < tam; i++)
  {
    posDelMin = i;
    for(int j = i + 1; j < tam; j++)
    {
      if(arr[j] < arr[posDelMin]) posDelMin = j;
    }
    intercambiar(arr[i],arr[posDelMin]);
  }
  return;
}

int repetidosV3(Alumno *alumno, int cantAlumnos)
{
  int repetidos = 0;
  int *legajos = new int [cantAlumnos];
  for(int i = 0; i < cantAlumnos; i++)
  {
    legajos[i] = alumno[i].getLegajo();
  }
  ordenar(legajos, cantAlumnos);
  for(int i = 1; i < cantAlumnos - 1; i++)
  {
    if(legajos[i - 1] == legajos[i] && legajos[i]!= legajos[i + 1])
      repetidos++;
  }
  if(legajos[cantAlumnos - 2] == legajos[cantAlumnos - 1])
    repetidos++;
  delete [] legajos;
  return repetidos;
}

