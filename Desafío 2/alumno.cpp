#include<iostream>
#include"alumno.h"
using namespace std;

int Alumno::getLegajo()
{
  return legajo;
}
int Alumno::getLlamado()
{
  return llamado;
}
int Alumno::getModalidad()
{
  return modalidad;
}
int Alumno::getNota()
{
  return nota;
}
void Alumno::setLegajo(int num)
{
  legajo = num;
}
void Alumno::setLlamado(int num)
{
  llamado = num;
}
void Alumno::setModalidad(int num)
{
  modalidad = num;
}
void Alumno::setNota(int num)
{
  nota = num;
}

void Alumno::ingresar()
{
  do
  {
    cout << "\tlegajo : ";
    cin >> legajo;
    if(legajo < 1) 
      cout << "No puede ser menor a 1." << endl;
  }while(legajo < 1);
  do
  {
    cout << "\tLlamado (1 a 3): ";
    cin >> llamado;
    if(llamado < 1 || llamado > 3)
      cout << "tiene que ser entre 1 y 3." << endl;
  }while(llamado < 1 || llamado > 3);
  do
  {
    cout << "\tModalidad (1 a 4): ";
    cin >> modalidad;
    if(modalidad < 1 || modalidad > 4)
      cout << "tiene que ser entre 1 y 4" << endl;
  }while(modalidad < 1 || modalidad > 4);
  do
  {
    cout << "\tNota (1 a 10): ";
    cin >> nota;
    if(nota < 1 || nota > 10)
      cout << "Solo entre 1 y 10." << endl;
  }while(nota < 1 || nota > 10);
  return;
}
