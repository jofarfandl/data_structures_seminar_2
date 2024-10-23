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
        void InsertarAlInicio(float VI, CObjeto* nd);
        void InsertarAlFinal(float VI, CObjeto* nd);
        void EliminarAlInicio();
        void EliminarAlFinal();
        int Size();
        bool IsEmpty();
        bool IsFull();
        void imprimir();
        CIterador& Begin();
        CIterador& End();
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
        bool verificar(float VI,CObjeto* nd);
};

#define CLSID_LIST 2000
class CLista2:public CObjeto{
    private:
        CNodo2 I;
        CNodo2 F;
        CIterador2 m_Begin;
        CIterador2 m_End;
    public:
        CLista2();
        ~CLista2();
        void Insertar(CObjeto* nd);
        int Size();
        void imprimir();
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
        CIterador2& Begin();
        CIterador2& End();
};

#endif // CLISTA_H_INCLUDED