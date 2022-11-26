#ifndef NODO_H
#define NODO_H
#include <iostream>

using namespace std;

class Nodo
{
    public:
        Nodo();
        Nodo(string dato, Nodo*,int id,string nombre,string apellido,string frase);

        string dato;
        int id;
        string nombre;
        string apellido;
        string frase;
        

        Nodo *sig;

        Nodo operator =(Nodo n);
        bool operator ==(Nodo n);
        bool operator !=(Nodo n);
        bool operator >(Nodo n);
        bool operator <(Nodo n);


};

#endif // NODO_H
