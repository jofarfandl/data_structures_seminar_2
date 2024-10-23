#include <iostream>
#include "CReverseIterador.h"

using namespace std;

void CReverseIterador::operator=(CReverseIterador& otro){
    pActual = otro.pActual;
}
bool CReverseIterador::operator==(CReverseIterador& otro){
    return pActual==otro.pActual;
};
bool CReverseIterador::operator!=(CReverseIterador& otro){
    return pActual!=otro.pActual;
};

void CReverseIterador::operator++(){
    pActual=pActual->pAnt;
}

void CReverseIterador::operator--(){
    pActual=pActual->pSig;
}

float& CReverseIterador::operator*(){
    return pActual->dato;
}

void CReverseIterador::Insertar_Adelante(float nd){
    float num=nd;
    pActual->InsertarAdelante(num);
}

float CReverseIterador::Eliminar_Adelante(){
    pActual->pAnt->EliminarAdelante();
}
