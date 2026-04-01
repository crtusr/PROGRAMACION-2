#include<iostream>
#include "cls.h"
using namespace std;

Contador::Contador(int val)
{
  valor = val;
  inicial = val;
}

void Contador::setValorInicial(int ini)
{
  inicial = ini;
}
void Contador::establecerValorInicial(int ini)
{
  inicial = ini;
  valor = ini;
}
void Contador::resetContador()
{
  valor = inicial;
}
int Contador::getValor()
{
  return valor;
}
void Contador::incrementar(int val)
{
  valor += val;
}
void Contador::decrementar(int val)
{
  if(valor > val-1)
    valor -= val;
}
void Contador::mostrar()
{
  cout << "Valor actual: " << valor << endl;
}

Contador::~Contador()
{
  cout << "DESTUCTOR ACTIVADO, ultimo valor: " << valor << endl;
}
