#include <iostream>
#include "cls.h"
using namespace std;

void testContador()
{
  Contador cont;
  cont.mostrar();
  cont.establecerValorInicial(0);
  cont.mostrar();
  cont.incrementar();
  cont.mostrar();
  cont.decrementar();
  cout << "getValor: " << cont.getValor() << endl;
  cont.setValorInicial(7);
  cont.mostrar();
  cont.resetContador();
  cont.mostrar();
  cont.incrementar(8);
  cont.mostrar();
}


int main()
{
  testContador();
  return 0;
}
