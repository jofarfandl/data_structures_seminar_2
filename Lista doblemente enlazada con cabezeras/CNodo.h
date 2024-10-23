#include <iostream>
#ifndef CNODO_CNODO_H
#define CNODO_CNODO_H

class CNodo{
    private:
        CNodo *pSig;
        CNodo *pAnt;
        float dato;
        void InsertarAdelante(float nd);
        float EliminarAdelante();

        friend class CLista;
};


#endif // CNODO_H_INCLUDED
