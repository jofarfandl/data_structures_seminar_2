#include <iostream>
#include "CNodo.h"
#include "CLista.h"
#include "CReverseIterador.h"

using namespace std;

CLista::CLista(){
    Inicio.pSig=&Final;
    Final.pAnt=&Inicio;
}

CLista::~CLista(){
    CNodo *P=Inicio.pSig;
    while(P!=&Final){
        P=P->pSig;
        delete P->pAnt;
    }
    Inicio.pSig=&Final;
    Final.pAnt=&Inicio;
}

void CLista::InsertarAlInicio(float nd){
    Inicio.InsertarAdelante(nd);
}

void CLista::InsertarAlFinal(float nd){
    Final.pAnt->InsertarAdelante(nd);
}

float CLista::EliminarAlFinal(){
    return Final.pAnt->pAnt->EliminarAdelante();
}

float CLista::EliminarAlInicio(){
    return Inicio.EliminarAdelante();
}

int CLista::Size(){
    int nodos = 0;
    CNodo *P = Inicio.pSig;

    while(P != &Final){
        nodos++;
        P=P->pSig;
    }return nodos;
}

bool CLista::IsEmpty(){
    return Inicio.pSig == &Final;
}
bool CLista::IsFull(){
    return Inicio.pSig != &Final;

}
void CLista::Imprimir(){
    CNodo *P = Inicio.pSig;
    cout<<"\tLista: ";
    while(P != &Final){
        cout<<P->dato<<" ";
        P=P->pSig;
    }
    cout<<""<<endl;
}


CReverseIterador& CLista::rBegin(){
	m_ritBegin.pActual=&Inicio;
	return m_ritBegin;
}

CReverseIterador& CLista::rEnd(){
	m_ritEnd.pActual=Final.pAnt;
	return m_ritEnd;
}

