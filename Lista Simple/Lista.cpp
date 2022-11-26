#include "Lista.h"

Lista::Lista(Nodo *sigPtr)
{

    h=sigPtr;
    //ctor
}

Lista::Lista()
{

    h=nullptr;

}

void Lista::Inicializa(void)
{
   h=nullptr;

}

void Lista::Burbuja(void)
{
    Nodo *aux1;
    Nodo *aux2;
    Nodo *tmp;


    aux1=h;
    while(aux1  !=  nullptr)
    {
        aux2=aux1->sig;
        while(aux2 != nullptr)
        {
            if(aux1->id > aux2->id)
            {
                cout << aux1->id << " es mayor que " << aux2->id << endl;
                tmp->dato=aux1->dato;
                tmp->id=aux1->id;
                tmp->nombre=aux1->nombre;
                tmp->apellido=aux1->apellido;
                tmp->frase=aux1->frase;

                aux1->dato=aux2->dato;
                aux1->id=aux2->id;
                aux1->nombre=aux2->nombre;
                aux1->apellido=aux2->apellido;
                aux1->frase=aux2->frase;

                aux2->dato=tmp->dato;
                aux2->id=tmp->id;
                aux2->nombre=tmp->nombre;
                aux2->apellido=tmp->apellido;
                aux2->frase=tmp->frase;

            }
            aux2=aux2->sig;

        }
        aux1=aux1->sig;
    }
}


void Lista::Vacia(void)
{
    Nodo *tmp=h;

    if(tmp==nullptr)
    {
        cout<<"La lista esta vacia"<<endl;
    }
    else
    {
        cout <<"La lista esta llena"<<endl;
    }
}

void Lista::InsertaInicio(string d,int id,string nombre,string apellido,string frase)
{
    Nodo *aux=new Nodo(d,nullptr,id,nombre,apellido,frase);
    if(h==nullptr)
    {
        h=aux;
    }
    else
    {
        aux->sig=h;
        h=aux;
    }
}

void Lista::InsertaFinal(string d, int id,string nombre,string apellido,string frase)
{
    Nodo *aux=new Nodo(d,nullptr,id,nombre,apellido,frase);
    Nodo *tmp=h;

    if (!tmp)
    {
        h=aux;
    }
    else
    {
        while(tmp->sig!=nullptr)
        {
            tmp=tmp->sig;
        }
        tmp->sig=aux;
    }
}

void Lista::InsertarPos(string d,int id,string nombre,string apellido,string frase,int pos)
{
    Nodo *aux = h;
    Nodo *auxAnt;
    Nodo *tmp = new Nodo(d,nullptr,id,nombre,apellido,frase);

    if(pos>Tamanio())
    {
        cout<<"\n Posicion no encontrada "<<endl;
    }
    else
    {
        if(pos==1)
        {
            InsertaInicio(d,id,nombre,apellido,frase);
        }
        else if (pos==Tamanio()){
            InsertaFinal(d,id,nombre,apellido,frase);
        }
        else
        {
            for(int i=1;i<pos;i++)
            {
                auxAnt=aux;
                aux=aux->sig;
            }
            auxAnt->sig=tmp;
            tmp->sig=aux;
        }
    }
}


void Lista::Eliminar(string d)
{
  Nodo *tmp=h;
  Nodo *tmpAnt=nullptr;
  bool band=true;

  if(tmp==nullptr)
  {
   cout<<"Lista vacia"<<endl;
  }
  else
  {
      while(tmp && band)
      {
          if(tmp->dato==d)
          {
             band=false;
          }
          else
          {
            tmpAnt=tmp;
            tmp=tmp->sig;
          }
      }
      if(tmp==nullptr)
      {
        cout<<"Dato no encontrado"<<endl;
      }
      else if(tmp==h)
      {
           h=h->sig;
           delete tmp;
      }
      else if(tmp->sig==nullptr)
      {
          tmpAnt->sig=nullptr;
          delete tmp;
      }
      else
      {
         tmpAnt->sig=tmp->sig;
         delete tmp;
      }
   }
}

void Lista::EliminarTodo()
{
    while(h!=nullptr)
    {
        Nodo *tmp=h;
        h=h->sig;
        delete tmp;
    }

    cout<<"Se ha eliminado toda la lista con exito"<<endl;
}

void Lista::Buscar(string d)
{
	Nodo *aux=h;
	bool band=true;
	int ind=1,pos=-1;

	while(band)
	{
		if (aux->dato == d)
		{
			pos=ind;
			band=false;
		}
		else
        {
        ind++;
		aux=aux->sig;
        }
	}

	if(pos!=-1)
		cout << "Se encontro en la posicion: "<<pos<<endl;
	else
		cout << "No se encontro" << endl;

}

void Lista::Mostrar(void)
{
    Nodo *tmp=h;

    if(!tmp)
    {
        cout<<"La lista esta vacia"<<endl;
    }
    else
    {
        while(tmp)
        {
            cout<<tmp->dato<<", ";
            cout<<tmp->id<<", ";
            cout<<tmp->nombre<<", ";
            cout<<tmp->apellido<<", ";
            cout<<tmp->frase<<endl;
            tmp=tmp->sig;
        }
        cout<<"\n"<<endl;
    }
}

int Lista::Tamanio()
{
    Nodo *aux=h;
    int i=1;
	while(aux!=nullptr)
	{
		aux=aux->sig;
		i++;
	}
	return i;
}

Nodo* Lista::Primero()
{
    Nodo *aux=h;

    if(aux)
        cout <<"El primer dato de la lista es: "<< aux->dato << endl;
    else
        cout << "La lista esta vacia" << endl;
    return h;
}

Nodo* Lista::Ultimo()
{
    Nodo *aux=h;
	Nodo *tmp;
	while(aux!=nullptr)
	{
        tmp=aux;
		aux=aux->sig;
	}

	cout <<"El ultimo dato de la lista es: "<< tmp->dato << endl;
    return tmp;

}

void Lista::Siguiente(string d)
{
    Nodo *aux=h;
    bool band=true;
	while(band)
	{
		if (aux->dato == d)
		{
			band=false;
		}
		aux=aux->sig;
	}
	if(aux){
        cout << "\n    El siguiente es "<<aux->dato << endl;
	}
    else{
        cout << "\n    No existe siguiente a ese dato" << endl;
    }
}

void Lista::Anterior(string d)
{
    Nodo *aux=h;
    Nodo *tmp=nullptr;
    bool band=true;
	while(band)
	{
		if (aux->dato == d)
		{
			band=false;
		}
		else
        {
         tmp=aux;
		 aux=aux->sig;
        }
	}
	if(tmp){
        cout << "\n    El anterior es "<< tmp->dato << endl;
	}
    else{
        cout << "\n    No existe anterior a ese dato" << endl;
    }
}
