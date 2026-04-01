#ifndef ALUMNO_H
#define ALUMNO_H

class Alumno 
{
  private:
    int legajo;
    int llamado;
    int modalidad;
    int nota;
  public:
    int getLegajo();
    int getLlamado();
    int getModalidad();
    int getNota();
    void setLegajo(int num);
    void setLlamado(int num);
    void setModalidad(int num);
    void setNota(int num);
    void ingresar();
};

#endif
