#include <iostream>
#ifndef CITERADOR_CITERADOR_H
#define CITERADOR_CITERADOR_H
#include "CNodo.h"
#include "CClase.h"

class CIterador{
    private:
        CNodo *pActual;
        friend class CLista;
    public:
        void operator =(CIterador& otro);
        bool operator ==(CIterador& otro);
        bool operator !=(CIterador& otro);
        void operator ++();
        void operator --();
        CObjeto* operator *();
        void Insertar_Adelante(CObjeto* nd);//-----------------
        void Eliminar_Adelante();
};

#endif // CNODO_H_INCLUDED
