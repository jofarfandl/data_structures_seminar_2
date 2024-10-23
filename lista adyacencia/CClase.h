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
        //Aqui me faltan cosas
        virtual string GetNombre(){};
        virtual float GetID(){};
        virtual float GetPrecio(){};
        virtual float GetPIB(){};
        virtual float GetAtracciones(){};
        
};

#define CLSID_CCiudad 700
class CCiudad:public CObjeto{
    protected:
        string Nombre;
        float ID;
        float Precio;
        float PIB;
        float Atracciones;
    public:
        CCiudad(){};
        ~CCiudad(){};
        string GetNombre();
        virtual void imprimir();
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
        void SetCiudad(string Nombre, int ID, float Precio, double PIB, int Atracciones);
        
        float GetID();
        float GetPrecio();
        float GetPIB();
        float GetAtracciones();


        virtual void imprimirNom();
};

#define CLSID_ARISTA 300
class CArista:public CObjeto{
    protected:
        string Nombre;
        float ID;
        float Precio;
        float PIB;
        float Atracciones;
        string Dificultad;
        float Distancia;

    public:
        //string GetNombre();
        void SetCiudad(string Nombre, float ID, float Precio, float PIB, float Atracciones, string Dificultad,float Distancia);
        virtual void imprimir();
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
        CArista(){};
        ~CArista(){};
};

#endif // COBJETO_COBJETO_H
