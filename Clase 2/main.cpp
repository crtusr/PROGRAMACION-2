#include <iostream>
#include "funciones.h"
using namespace std;

int main()
{
  float nota1 = pedirNumeroPositivo("Ingresar nota 1: ");
  float nota2 = pedirNumeroPositivo("Ingresar nota 2: ");
  float nota3 = pedirNumeroPositivo("Ingresar nota 3: ");
  intercambiar(nota1, nota2);

  cout << "nro: " << nota1 << " " << nota2 << " " << nota3 << endl;

  float suma = sumar(nota1, nota2, nota3);

  cout << suma;
 
  return 0;
} 

