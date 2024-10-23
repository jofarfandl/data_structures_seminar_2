#include <iostream>
#ifndef CLISTA_CLISTA_H
#define CLISTA_CLISTA_H
#include "CNodo.h"
#include "CIterador.h"
#include "CClase.h"


class CLista{
    private:
        CNodo Inicio;
        CNodo Final;
        CIterador m_itBegin;
        CIterador m_itEnd;
    public:
        CLista();
        ~CLista();
        void InsertarAlInicio(CObjeto* nd);
        void InsertarAlFinal(CObjeto* nd);
        void EliminarAlInicio();
        void EliminarAlFinal();
        int Size();
        bool IsEmpty();
        bool IsFull();
        void Imprimir();
        CIterador& Begin();
        CIterador& End();
};

#endif // CLISTA_H_INCLUDED
