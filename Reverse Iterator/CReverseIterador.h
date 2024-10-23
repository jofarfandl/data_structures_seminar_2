#include <iostream>
#ifndef CITERADOR_CITERADOR_H
#define CITERADOR_CITERADOR_H
#include "CNodo.h"

class CReverseIterador{
    private:
        CNodo *pActual;
        friend class CLista;
    public:
        void operator =(CReverseIterador& otro);
        bool operator ==(CReverseIterador& otro);
        bool operator !=(CReverseIterador& otro);
        void operator ++();
        void operator --();
        float& operator *();
        void Insertar_Adelante(float nd);
        float Eliminar_Adelante();
};

#endif // CNODO_H_INCLUDED
