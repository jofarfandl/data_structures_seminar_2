#include <iostream>
#include <string.h>
#ifndef COBJETO_COBJETO_H
#define COBJETO_COBJETO_H
#include "CSerializable.h"
#include <fstream>

using namespace std;

#define CLSID_OBJETO 200
class CObjeto:public CSerializable{
    public:
        virtual void imprimir();
        CObjeto(){};
        ~CObjeto(){};
        virtual void Insertar(CObjeto*A){};
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
};

#define CLSID_CCiudad 700
class CCiudad:public CObjeto{
    protected:
        string Nombre;
        int ID;
        float Precio;
        double PIB;
        int Atracciones;
    public:
        void SetCiudad(string Nombre, int ID, float Precio, double PIB, int Atracciones);
        virtual void imprimir();
        virtual void imprimirNom();
        CCiudad(){};
        ~CCiudad(){};
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
        string GetNombre();
        int GetID();
};

#endif // COBJETO_COBJETO_H
