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
        void Insertar_Adelante(CObjeto* VI, CObjeto* nd);
        void Eliminar_Adelante();
};

class CIterador2{
    private:
        CNodo2 *pActual;
        friend class CLista2;
    public:
        void operator =(CIterador2& otro);
        bool operator ==(CIterador2& otro);
        bool operator !=(CIterador2& otro);
        void operator ++();
        void operator --();
        CObjeto* operator *();
        void Insertar_Adelante(CObjeto* nd);
};

#endif // CNODO_H_INCLUDED
