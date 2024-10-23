#include <iostream>
#include "CNodo.h"
#include "CLista.h"
#include "CClase.h"


void CNodo::InsertarAdelante(CObjeto* nd){
    CNodo *pNuevo = new CNodo;
    pNuevo->dato = nd;
    pNuevo->pSig = this->pSig;
    pNuevo->pAnt = this;
    this->pSig = pNuevo;
    this->pSig->pSig->pAnt = pNuevo;
}

void CNodo::EliminarAdelante(){
    this->pSig->pSig->pAnt = this->pSig->pSig->pAnt->pAnt;
    this->pSig = this->pSig->pSig;
}
