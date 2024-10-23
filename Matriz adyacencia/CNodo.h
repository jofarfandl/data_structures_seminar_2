#include <iostream>
#ifndef CNODO_CNODO_H
#define CNODO_CNODO_H
#include "CClase.h"

class CNodo{
    private:
        CNodo *pSig;
        CNodo *pAnt;
        CObjeto *dato;
        float ValorI;
        void InsertarAdelante(float VI, CObjeto* nd);
        void EliminarAdelante();

        friend class CLista;
        friend class CIterador;
};

class CNodo2{
    private:
        CNodo2 *sig;
        CNodo2 *ant;
        CObjeto *valor;
        void InsertarAdelante(CObjeto* nd);

        friend class CLista2;
        friend class CIterador2;
};

#endif // CNODO_H_INCLUDED
