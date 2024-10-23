#include <iostream>
#ifndef CLISTA_CLISTA_H
#define CLISTA_CLISTA_H
#include "CNodo.h"

using namespace std;

class CLista{
    private:
        CNodo Inicio;
        CNodo Final;
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
};

#endif // CLISTA_H_INCLUDED
