#ifndef FUNCIONES_H
#define FUNCIONES_H

#include "alumno.h"

int maximo(int *vec, int tam);
int contarModalidad(Alumno *alumno, int modalidad, int tam);
int contarModYLlamado(Alumno *alumno, int llamado, int modalidad, int tam);
int repetidos(Alumno *alumno, int CantAlumnos);
int repetidosV2(Alumno *alumno, int CantAlumnos);
int repetidosV3(Alumno *alumno, int CantAlumnos);

#endif

