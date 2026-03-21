#include "funciones.h"
#include <iostream>

using namespace std;

float pedirNumeroPositivo(string mensaje)
{
  float numero;
  do
  {
    cout << mensaje << endl;
    cin >> numero;
  }while(!(numero > 0));
  return numero;
}

float sumar(float num1, float num2)
{
  return num1 + num2;
}

float sumar(float num1, float num2, float num3)
{
  return num1 + num2 + num3;
}

void intercambiar(float &num1, float &num2)
{
  int temp = num1;
  num1 = num2;
  num2 = temp;
  return;
}
