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

void CIterador::Insertar_Adelante(CObjeto* nd){
    pActual->pAnt->InsertarAdelante(nd);
}

void CIterador::Eliminar_Adelante(){
    pActual->pAnt->EliminarAdelante();
}