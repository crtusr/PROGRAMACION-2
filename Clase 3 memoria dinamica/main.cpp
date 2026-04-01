#include <iostream>

using namespace std;

int main()
{
  int tamanio;

  cout << "Tamanio del vector: ";
  cin >> tamanio;
  int *vec = nullptr;
  vec = new int [tamanio];
  if(vec == nullptr)
  {
    cout << "FALLO, LLAMA A SOPORTE" << endl;
    return -1;
  }

  cout << "TODO OK" << endl;
  delete []vec;

  return 0;
}
