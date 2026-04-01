#ifndef CLS_H_INCLUDED
#define CLS_H_INCLUDED

class Contador
{
  private:
    int valor;
    int inicial;

  public:
    Contador(int val = 0);
    void setValorInicial(int ini);
    void establecerValorInicial(int ini);
    void resetContador();
    int getValor();
    void incrementar(int val = 1);
    void decrementar(int val = 1);
    void mostrar();
    ~Contador();
};

#endif // CLS_H_INCLUDED
