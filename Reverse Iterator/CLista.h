#include <iostream>
#ifndef CLISTA_CLISTA_H
#define CLISTA_CLISTA_H
#include "CNodo.h"
#include "CReverseIterador.h"


class CLista{
    private:
        CNodo Inicio;
        CNodo Final;
        CReverseIterador m_ritBegin;
        CReverseIterador m_ritEnd;
    public:
        CLista();
        ~CLista();
        void InsertarAlInicio(float);
        void InsertarAlFinal(float);
        float EliminarAlInicio();
        float EliminarAlFinal();
        int Size();
        bool IsEmpty();
        bool IsFull();
        void Imprimir();
        CReverseIterador& rBegin();
        CReverseIterador& rEnd();
};

#endif // CLISTA_H_INCLUDED
