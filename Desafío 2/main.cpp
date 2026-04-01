#include <iostream>
#include <cstdlib>
#include "funciones.h"
#include "alumno.h"

using namespace std;

int main()
{
  const int cantMaterias = 10, nModalidades = 4, nLlamados = 3;
  int cantAlumnos[cantMaterias], matMayInscr, modMayInscrXLlamado[nLlamados];
  int modMayInscr, inscrPorModalidad[nModalidades] = {};
  int inscrPorModYLlamado[nLlamados][nModalidades] = {}, repetidosXMateria[cantMaterias] = {};
  Alumno *alumno[cantMaterias];

  for(int i = 0; i < cantMaterias; i++)
  {
    alumno[i] = nullptr;
    cout << "Cuantos alumnos se anotaron? ";
    cin >> cantAlumnos[i];

    alumno[i] = new Alumno [cantAlumnos[i]];
    if(alumno[i] == nullptr)
    {
      cout << "fallo de memoria" << endl;
      return -1;
    }
    for(int j = 0; j < cantAlumnos[i]; j++)
    {
      cout << "Alumno " << j + 1 << ": " << endl;
      alumno[i][j].ingresar();
    }
    //ingresarDatos(alumno[i], cantAlumnos[i]);
  }
  //a)
  matMayInscr = maximo(cantAlumnos, cantMaterias) + 1;
  //b)
  for(int i = 0; i < nModalidades; i++)
    for(int j = 0; j < cantMaterias; j++)
      inscrPorModalidad[i] += contarModalidad(alumno[j], i + 1, cantAlumnos[i]);
  modMayInscr = maximo(inscrPorModalidad, 4) + 1;
  //c)
  for(int i = 0; i < nLlamados; i++)
    for(int j = 0; j < nModalidades; j++)
      for(int k = 0; k < cantMaterias; k++)
        inscrPorModYLlamado[i][j] += contarModYLlamado(alumno[k], i + 1, j + 1, cantAlumnos[k]);
  for(int i = 0; i < nLlamados; i++)
  {
    modMayInscrXLlamado[i] = maximo(inscrPorModYLlamado[i], nModalidades) + 1;
  }
  //d)
  for(int i = 0; i < cantMaterias; i++)
    repetidosXMateria[i] = repetidosV3(alumno[i], cantAlumnos[i]);
  
  cout << "Materia con mayor cantidad de inscriptos: " << matMayInscr << endl;
  cout << "Modalidad con mayor cantidad de inscriptos: " << modMayInscr << endl;
  cout << "Modalidad con mayor cantidad de inscriptos por llamado: " << endl;
  for(int i = 0; i < nLlamados; i++)
    cout << "\t- " << i + 1 << ". " <<  modMayInscrXLlamado[i] << endl;
  cout << "Alumnos inscriptos más de una vez por materia:" << endl;
  for(int i = 0; i < cantMaterias; i++)
    cout << "\t- " << i + 1 << ". " << repetidosXMateria[i] << endl;

  for(int i = 0; i < cantMaterias; i++)
  {
    delete [] alumno[i];
  }
  system("pause");
  return 0;
}
