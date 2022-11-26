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

void Nodo::setDato(string dato)
{
    this->dato=dato;
}

void Nodo::setSig(Nodo *sig)
{
    this->sig=sig;
}

void Nodo::setId(int id)
{
    this->id=id;
}

void Nodo::setNombre(string nombre)
{
    this->nombre=nombre;
}

void Nodo::setApellido(string apellido)
{
    this->apellido=apellido;
}

void Nodo::setFrase(string frase)
{
    this->frase=frase;
}

string Nodo::getDato(void)
{
    return dato;
}

Nodo* Nodo::getSig(void)
{
    return sig;
}

int Nodo::getId(void)
{
    return id;
}

string Nodo::getNombre(void)
{
    return nombre;
}

string Nodo::getApellido(void)
{
    return apellido;
}

string Nodo::getFrase(void)
{
    return frase;
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