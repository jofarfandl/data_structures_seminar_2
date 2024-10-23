#include <iostream>
#include "CNodo.h"
#include "CLista.h"
#include "CClase.h"


void CNodo::InsertarAdelante(CObjeto* VI, CObjeto* nd){
    CNodo *pNuevo = new CNodo;
    pNuevo->ValorI = VI;
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

void CNodo2::InsertarAdelante(CObjeto* arista){
    CNodo2 *Nuevo = new CNodo2;
    Nuevo->arista = arista;
    Nuevo->sig = this->sig;
    Nuevo->ant = this;
    this->sig = Nuevo;
    this->sig->sig->ant = Nuevo;
}