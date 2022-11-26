#include "Nodo.h"


Nodo::Nodo(string dato, Nodo *sig,int id,string nombre,string apellido,string frase)
{
    this->dato=dato;
    this->sig=sig;
    this->id=id;
    this->nombre=nombre;
    this->apellido=apellido;
    this->frase=frase;
}



Nodo::Nodo()
{
    string dato;
    sig=nullptr;
    id=-1;
    nombre="";
    apellido="";
    frase="";

}

void Nodo::Insertar(string dato, Nodo *sig,int id,string nombre,string apellido,string frase)
{
    this->dato=dato;
    this->sig=sig;
    this->id=id;
    this->nombre=nombre;
    this->apellido=apellido;
    this->frase=frase;
}

Nodo Nodo::operator =(Nodo n)
{
    this->dato=n.dato;
    this->sig=n.sig;
    this->id=n.id;
    this->nombre=n.nombre;
    this->apellido=n.apellido;
    this->frase=n.frase;

}

bool Nodo::operator ==(Nodo n)
{
    if(this-> id == n.id)
    {
        return true;
    }
    return false;
    
}

bool Nodo::operator !=(Nodo n)
{
    if(this-> id != n.id)
    {
        return true;
    }
    return false;
}

bool Nodo::operator >(Nodo n)
{
    if(this-> id > n.id)
    {
        return true;
    }
    return false;
}

bool Nodo::operator <(Nodo n)
{
    if(this-> id < n.id)
    {
        return true;
    }
    return false;
}