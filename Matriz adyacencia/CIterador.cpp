#include <iostream>
#include "CIterador.h"
#include "CClase.h"

using namespace std;

void CIterador::operator=(CIterador& otro){
    pActual = otro.pActual;
}
bool CIterador::operator==(CIterador& otro){
    return pActual==otro.pActual;
};
bool CIterador::operator!=(CIterador& otro){
    return pActual!=otro.pActual;
};

void CIterador::operator++(){
    pActual=pActual->pSig;
}

void CIterador::operator--(){
    pActual=pActual->pAnt;
}

CObjeto* CIterador::operator*(){
    return pActual->dato;
}

void CIterador::Insertar_Adelante(float VI, CObjeto* nd){
    pActual->pAnt->InsertarAdelante(VI,nd);
}

void CIterador::Eliminar_Adelante(){
    pActual->pAnt->EliminarAdelante();
}


//*************************************************************
CObjeto *CIterador2::operator*(){
    return pActual->valor;
}

void CIterador2::operator++(){
    pActual=pActual->sig;
}

void CIterador2::operator--(){
    pActual=pActual->ant;
}
void CIterador2::operator=(CIterador2& otro){
    pActual = otro.pActual;
}
bool CIterador2::operator==(CIterador2& otro){
    return pActual==otro.pActual;
};
bool CIterador2::operator!=(CIterador2& otro){
    return pActual!=otro.pActual;
};

void CIterador2::Insertar_Adelante(CObjeto* nd){
    pActual->ant->InsertarAdelante(nd);
}
