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
        CObjeto(){};
        ~CObjeto(){};
        virtual void imprimir();
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
        CCiudad(){};
        ~CCiudad(){};
        string GetNombre();
        int GetID();
        float GetPrecio();
        double GetPIB();
        virtual void imprimir();
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
        int GetAtracciones();
        void SetCiudad(string Nombre, int ID, float Precio, double PIB, int Atracciones);
        
};

#endif // COBJETO_COBJETO_H
