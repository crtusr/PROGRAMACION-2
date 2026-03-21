#include <iostream>

using namespace std;

void cambiarValor(int *vec, int tam)
{
    for(int i = 0; i < tam; i++)
        vec[i] *= 2;
    return;
}

void cambiarValor(int &num)
{
    num = 15;
}

bool esPar(int num)
{
    return num%2 == 0;
}


int main()
{
    const int tam = 10;
    int x[10] = {1,2,3,4,5,6,7,8,9,10};
    char vecChar[10] = "Hola";
    for(int i = 0; i < tam; i++)
        *(x + i) = tam - i;
    int pos = 0;
    while(vecChar[pos] != '\0')
    {
        cout << vecChar[pos];
        pos++;
    }
    for(int i = 0; i < 255; i++)
    {
        cout << i << " - " << (char)i << endl;
    }
    return 0;
    cout << *(x + 2) << endl;
    //cout << sizeof(tam) << endl;
    for(int i = 0; i < tam; i++)
        cout << "X: " << x[i] << endl;
    return 0;
}
