#include <iostream>
#include "CNodo.h"
#include "CLista.h"


void CNodo::InsertarAdelante(float nd){
    CNodo *pNuevo = new CNodo;
    pNuevo->dato = nd;
    pNuevo->pSig = this->pSig;
    pNuevo->pAnt = this;
    this->pSig = pNuevo;
    this->pSig->pSig->pAnt = pNuevo;
}

float CNodo::EliminarAdelante(){
    float val;
    //int pos=0;
    //pos = &this;
    val = this->pSig->dato;
    this->pSig->pSig->pAnt = this->pSig->pSig->pAnt->pAnt;
    this->pSig = this->pSig->pSig;
    //delete(pos);
    //falta liberar el nodo
    return val;
}


