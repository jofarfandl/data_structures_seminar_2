#include <iostream>
#include "CNodo.h"
#include "CLista.h"
#include "CIterador.h"
#include "CClase.h"

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

void CLista::InsertarAlInicio(CObjeto* nd){
    Inicio.InsertarAdelante(nd);
}

void CLista::InsertarAlFinal(CObjeto* nd){
    Final.pAnt->InsertarAdelante(nd);
}

void CLista::EliminarAlFinal(){
    Final.pAnt->pAnt->EliminarAdelante();
}

void CLista::EliminarAlInicio(){
    Inicio.EliminarAdelante();
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
//-----------------------------------------
void CLista::Imprimir(){
    CNodo *P = Inicio.pSig;
    cout<<"\tHERENCIA: ";
    while(P != &Final){
        CObjeto* A=new CObjeto();
        A=P->dato;
        A->imprimirobj();
        A->imprimir();
        P=P->pSig;
    }
    cout<<""<<endl;
}
//----------------------------------------

CIterador& CLista::Begin(){
	m_itBegin.pActual=Inicio.pSig;
	return m_itBegin;
}

CIterador& CLista::End(){
	m_itEnd.pActual=&Final;
	return m_itEnd;
}

