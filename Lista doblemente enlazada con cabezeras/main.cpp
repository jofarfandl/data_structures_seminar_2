/*  Farfan de Leon Jose Osvaldo
    Lista doblemente enlazada con cabezeras
----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
#include<iostream>
#include "CNodo.h"
#include "CLista.h"
#include "CLista.cpp"
#include "CNodo.cpp"

using namespace std;

int main(){
    CLista l;
    float dato;

    cout<<"\nLISTA DOBLEMENETE ENLAZADA\n\n"<<endl;
    l.Imprimir();
    cout<<"\tIsEmpty: "<<l.IsEmpty()<<endl;
    cout<<"\tIsFull: "<<l.IsFull()<<endl;
    cout<<"Insertamos al Inicio 2 numeros"<<endl;
    l.InsertarAlInicio(30);
    l.InsertarAlInicio(20);
    l.Imprimir();
    cout<<"Insertamos al Final 2 numeros"<<endl;
    l.InsertarAlFinal(70);
    l.InsertarAlFinal(80);
    l.Imprimir();
    cout<<"Eliminamos al Inicio 1 numero"<<endl;
    l.EliminarAlInicio();
    l.Imprimir();
    cout<<"Eliminamos al Final 1 numero"<<endl;
    l.EliminarAlFinal();
    l.Imprimir();
    cout<<"Tamanio de Lista: "<<l.Size()<<endl;
    cout<<"\tIsEmpty: "<<l.IsEmpty()<<endl;
    cout<<"\tIsFull: "<<l.IsFull()<<endl;
}
