#include <iostream>

using namespace std;

int main()
{
  int valor = 100;
  int vec[5] = {1, 2, 3, 4, 5};
  int &referencia = valor;
  int *miPuntero = &valor;

  cout << &valor << endl;
  cout << &referencia << endl;
  cout << *miPuntero << endl;


  miPuntero = vec;

  cout << miPuntero[0] << endl;

  return 0;
}
