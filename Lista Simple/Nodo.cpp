#include "Nodo.h"


Nodo::Nodo(string dato, Nodo *sig,int id)
{
    this->dato=dato;
    this->sig=sig;
    this->id=id;
}


Nodo::Nodo()
{
    string dato;
    sig=nullptr;
    id=-1;
}

Nodo Nodo::operator =(Nodo n)
{
    this->dato=n.dato;
    this->sig=n.sig;
    this->id=n.id;
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