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

        void setDato(string);
        void setSig(Nodo*);
        void setId(int);
        void setNombre(string);
        void setApellido(string);
        void setFrase(string);

        string getDato(void);
        Nodo* getSig(void);
        int getId(void);
        string getNombre(void);
        string getApellido(void);
        string getFrase(void);
        

        Nodo *sig;

        bool operator ==(Nodo n);
        bool operator !=(Nodo n);
        bool operator >(Nodo n);
        bool operator <(Nodo n);


};

#endif // NODO_H
