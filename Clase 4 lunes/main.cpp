#include <iostream>
#include <cstring>

using namespace std;

class Materia
{
  private:
    int codigo;
    char nombre[50];
    int cupoMaximo;
    int codigoCarrera;

  public:


    void setCodigo(int c);
    int getCodigo();
    void setNombre(const char *n);
    const char *getNombre();
    void cargar();
    void mostrar();
};

void Materia::setCodigo(int c)
{
  if(c > 0) 
    codigo = c;
  else
    codigo = 0;
}
int Materia::getCodigo()
{
  return codigo;
}
void Materia::setNombre(const char *n)
{
  strcpy(nombre, n);
}
const char *Materia::getNombre()
{
  return nombre;
}
void Materia::cargar()
{
  cout << "Codigo: ";
  cin >> codigo;
  cout << "Nombre: ";
  cin >> nombre;
  cout << "Cupo: ";
  cin >> cupoMaximo;
  cout << "Codigo de carrera: ";
  cin >> codigoCarrera;
}
void Materia::mostrar
/*
void cargarMaterias(Materia *vecMaterias)
{
  return;
}
*/

int main()
{
  //const int tam = 20;
  Materia pepito;
  pepito.setCodigo(-10);
  cout << "CODIGO: " << pepito.getCodigo() << endl;
  pepito.setNombre("ARSO");
  cout << "NOMBRE: " << pepito.getNombre() << endl;
  //materia vecMaterias[tam];
  return 0;
}
