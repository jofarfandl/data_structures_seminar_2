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

#define CLSID_CPERSONA 700
class CPersona:public CObjeto{
    protected:
        string Nombre;
        float Anios;
        string Codigo;  
        string Ciudad;
        string Carrera;
    public:
        void Setnombre(string Nombre, float Anios, string Codigo, string Ciudad, string Carrera);
        virtual void imprimir();
        CPersona(){};
        ~CPersona(){};
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
};

#endif // COBJETO_COBJETO_H