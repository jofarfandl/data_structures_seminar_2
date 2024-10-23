#include <iostream>
#include <fstream>
#ifndef CLISTA_CLISTA_H
#define CLISTA_CLISTA_H
#include "CNodo.h"
#include "CIterador.h"
#include "CClase.h"


#define CLSID_CLISTA 1000
class CLista : public CObjeto{
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
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
};

#endif // CLISTA_H_INCLUDED
