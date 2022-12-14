#include <iostream>
#include "Lista.h"

using namespace std;

int main()
{
    int opc;
    int pos;
    int id;
    string dato,nombre,apellido,frase;
    Lista *lis=new Lista();

    lis->InsertaFinal("A",7,"Juan","Perez","Hola Mundo");
    lis->InsertaFinal("B",6,"Max","Rocha","Tengo sueño");
    lis->InsertaFinal("C",9,"Gus","Valdez","Adios");
    lis->InsertaFinal("D",0,"Luis","Garcia","Como estas");





    do{
    system("cls");
    cout <<"***** Menu Lista Simple *****\n"<<endl;
    cout <<"\t1 Vacia" <<endl;
    cout <<"\t2 Insertar al Inicio" <<endl;
    cout <<"\t3 Insertar al Final" <<endl;
    cout <<"\t4 Insertar en Posicion" <<endl;
    cout <<"\t5 Eliminar"<< endl;
    cout <<"\t6 Eliminar Todo"<< endl;
    cout <<"\t7 Buscar"<< endl;
    cout <<"\t8 Mostrar Todo "<< endl;
    cout <<"\t9 Tama�o "<< endl;
    cout <<"\t10 Primero"<< endl;
    cout <<"\t11 Ultimo"<< endl;
    cout <<"\t12 Siguiente"<< endl;
    cout <<"\t13 Anterior"<< endl;
    cout <<"\t14 Ordenar Burbuja"<< endl;
    cout <<"\t15 Ordenar Quick"<< endl;
    cout <<"\t0 Salir del Programa \n"<< endl;
    cout <<"****************************\n"<<endl;
    cin>>opc;

    switch(opc){
    case 1:         //Vacia
        system("cls");
        lis->Vacia();
        cout << "\n";
        system("pause");
        break;

    case 2:         //Insertar al Inicio
        system("cls");
        cout << "\n  Inserta el Dato :  ";
        cin >> dato;
        cout << "\n  Inserta el ID :  ";
        cin >> id;
        cout << "\n  Inserta el Nombre :  ";
        cin >> nombre;
        cout << "\n  Inserta el Apellido :  ";
        cin >> apellido;
        cout << "\n  Inserta la Frase :  ";
        cin >> frase;
        lis->InsertaInicio(dato,id,nombre,apellido,frase);
        cout << "\n";
        system("pause");
        break;

    case 3:         //Insertar al Final
        system("cls");
        cout << "\n  Inserta el Dato :  ";
        cin >> dato;
        cout << "\n  Inserta el ID :  ";
        cin >> id;
        cout << "\n  Inserta el Nombre :  ";
        cin >> nombre;
        cout << "\n  Inserta el Apellido :  ";
        cin >> apellido;
        cout << "\n  Inserta la Frase :  ";
        cin >> frase;
        lis->InsertaFinal(dato,id,nombre,apellido,frase);
        cout << "\n";
        system("pause");
        break;

    case 4:         //Insertar en Posicion
        system("cls");
        cout<< "\n  Inserta el Dato :  ";
        cin >> dato;
        cout << "\n  Inserta el ID :  ";
        cin >> id;
        cout << "\n  Inserta el Nombre :  ";
        cin >> nombre;
        cout << "\n  Inserta el Apellido :  ";
        cin >> apellido;
        cout << "\n  Inserta la Frase :  ";
        cin >> frase;
        cout<< "\n  �En Cual Posicion?  ";
        cin >> pos;
        lis->InsertarPos(dato,id,nombre,apellido,frase,pos);
        cout << "\n";
        system("pause");
        break;

    case 5:         //Eliminar
        system("cls");
        cout << "\n  �Cual dato quieres eliminar? :  ";
        cin >> dato;
        lis->Eliminar(dato);
        cout << "\n";
        system("pause");
        break;

    case 6:         //Eliminar Todo
        system("cls");
        lis->EliminarTodo();
        break;

    case 7:         //Buscar
        system("cls");
        cout << "\n  �Cual es el dato que vas a buscar?:  ";
        cin>> dato;
        lis->Buscar(dato);
        cout << "\n";
        system("pause");
        break;

    case 8:         //Mostrar
        system("cls");
        lis->Mostrar();
        system("pause");
        cout << "\n";
        break;

    case 9:         //Tama�o
        system("cls");
        lis->Tamanio();
        system("pause");
        cout << "\n";
        break;

    case 10:         //Primero
        system("cls");
        lis->Primero();
        system("pause");
        cout << "\n";
        break;

    case 11:         //Ultimo
        system("cls");
        lis->Ultimo();
        system("pause");
        cout << "\n";
        break;

    case 12:         //Siguiente
        system("cls");
        cout << "\n  �De cual dato quieres saber su siguiente?:  ";
        cin>> dato;
        lis->Siguiente(dato);
        cout << "\n";
        system("pause");
        break;

    case 13:         //Anterior
        system("cls");
        cout << "\n  �De cual dato quieres saber su anterior?:  ";
        cin>> dato;
        lis->Anterior(dato);
        cout << "\n";
        system("pause");
        break;
    case 14:         //Ordenar Burbuja
        system("cls");
        lis->Burbuja();
        cout << "Lista ordenada!\n";
        lis->Mostrar();
        system("pause");
        break;
    case 15:         //Ordenar Quick
        system("cls");
        lis->Burbuja();
        cout << "Lista ordenada!\n";
        lis->Mostrar();
        system("pause");
        break;


    }

    }while(opc!=0);

    cout<<"\n Nos vemos luego"<<endl;

    return 0;
}
