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

        //Ordenamientos
        void Burbuja(void);
        void Insercion(void);
        void Seleccion(void);
        void Shell(void);
        Nodo* Quick(Nodo *start = h, Nodo *end = Ultimo());
        void Merge(void);


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
        Nodo* Primero(void);
        Nodo* Ultimo(void);
        void Siguiente(string);
        void Anterior(string);
};

#endif // LISTA_H
