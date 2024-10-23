#include <iostream>
#include "CNodo.h"
#include "CLista.h"

using namespace std;

CLista::CLista(){
    Inicio.pSig = &Final;
    Final.pAnt = &Inicio;
}

CLista::~CLista(){}

void CLista::InsertarAlInicio(float nd){
    Inicio.InsertarAdelante(nd);
}

void CLista::InsertarAlFinal(float nd){
    Final.pAnt->InsertarAdelante(nd);
}


float CLista::EliminarAlFinal(){
    if(IsEmpty() != true){
        return Final.pAnt->pAnt->EliminarAdelante();
    }else{
        cout<<"Insuficiencia de datos"<<endl;
    }
}

float CLista::EliminarAlInicio(){
    if(IsEmpty() != true){
        return Inicio.EliminarAdelante();
    }else{
        cout<<"Insuficiencia de datos"<<endl;
    }
}

int CLista::Size(){
    int nodos = 0;
    CNodo *P = Inicio.pSig;

    while(P != &Final){
        nodos++;
        P=P->pSig;
    }
    return nodos;
}

bool CLista::IsEmpty(){
    return Inicio.pSig == &Final;
}

bool CLista::IsFull(){
    return Inicio.pSig != &Final;
}

void CLista::Imprimir(){
    if(IsEmpty() != true){
        CNodo *P = Inicio.pSig;
        cout<<"\tLista: ";
        while(P != &Final){
            cout<<P->dato<<" ";
            P=P->pSig;
        }
        cout<<""<<endl;
    }else{
        cout<<"\tLista vacia"<<endl;
    }
}
