#include <iostream>
#ifndef CNODO_CNODO_H
#define CNODO_CNODO_H
#include "CClase.h"

class CNodo{
    private:
        CNodo *pSig;
        CNodo *pAnt;
        CObjeto *dato;
        CObjeto *ValorI;
        void InsertarAdelante(CObjeto* VI, CObjeto* nd);
        void EliminarAdelante();

        friend class CLista;
        friend class CIterador;
};

class CNodo2{
    private:
        CNodo2 *sig;
        CNodo2 *ant;
        CObjeto *arista;
        void InsertarAdelante(CObjeto* arista);

        friend class CLista2;
        friend class CIterador2;
};

#endif // CNODO_H_INCLUDED
