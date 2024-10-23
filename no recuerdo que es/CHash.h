#include <iostream>
#include <string.h>
#include "CArbol.h"
#include "CClase.h"
#include <fstream>
#ifndef CHASH_H_INCLUDED
#define CHASH_H_INCLUDED

using namespace std;

class CHash:public CCiudad{
    private:
        struct nodo* array[17];
        int tamanio=17;
    public:
        CHash();
        void show();
        void insert(int index,CCiudad* value);
        bool find(int index,CCiudad* value);
        CCiudad* locate(int index,CCiudad* value);
        void Delete(int index,CCiudad* value);
        int dispersion(CCiudad* value);
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
};

#endif // CNODO_H_INCLUDED