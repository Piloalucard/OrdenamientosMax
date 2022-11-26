#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include <iostream>

using namespace std;

class Lista
{
    public:
        Lista();
        Lista(Nodo*);

        Nodo *h;

        //Lista de Operaciones
        void Inicializa(void);
        void Vacia(void);
        void InsertaInicio(string);
        void InsertaFinal(string);
        void InsertarPos(string,int);
        void Eliminar(string);
        void EliminarTodo(void);
        void Buscar(string);
        void Mostrar(void);
        int Tamanio(void);
        void Primero(void);
        void Ultimo(void);
        void Siguiente(string);
        void Anterior(string);
};

#endif // LISTA_H
