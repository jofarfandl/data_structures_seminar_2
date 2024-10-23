#include <iostream>
#ifndef CNODO_CNODO_H
#define CNODO_CNODO_H
#include "CClase.h"

class CNodo{
    private:
        CNodo *pSig;
        CNodo *pAnt;
        CObjeto *dato;
        void InsertarAdelante(CObjeto* nd);
        void EliminarAdelante();

        friend class CLista;
        friend class CIterador;
};

#endif // CNODO_H_INCLUDED
