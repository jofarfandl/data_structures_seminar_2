#include <iostream>
#include <string.h>
#ifndef COBJETO_H_INCLUDED
#define COBJETO_H_INCLUDED

using namespace std;

class CObjeto{
    public:
        virtual void imprimir();
        virtual void imprimirobj();///----------
        CObjeto();
        ~CObjeto();
};

class CPersona:public CObjeto{
    protected:
        string Nombre;
    public:
        void Setnombre(string cad);
        virtual void imprimir();
        virtual void imprimirobj();
        CPersona();
        ~CPersona();
};

class CAlumno:public CPersona{
    protected:
        string Codigo;
    public:
        void SetCodigo(string cad);
        virtual void imprimir();
        virtual void imprimirobj();
        CAlumno();
        ~CAlumno();
};

class CMaestro:public CPersona{
    protected:
        string Cedula;
    public:
        void SetCedula(string cad);
        virtual void imprimir();
        virtual void imprimirobj();
        CMaestro();
        ~CMaestro();
};

class CAuto:public CObjeto{
    protected:
        string Color;
        int Motor;
    public:
        void SetColor(string cad,int nd);
        virtual void imprimir();
        virtual void imprimirobj();
        CAuto();
        ~CAuto();
};

class CPatrulla:public CAuto{
    protected:
        int Sirena;
    public:
        void Setsirena(int cad);
        virtual void imprimir();
        virtual void imprimirobj();
        CPatrulla();
        ~CPatrulla();
};

class CBindado:public CPatrulla{
    protected:
        int Blindaje;
    public:
        void SetBlindaje(int cad);
        virtual void imprimir();
        virtual void imprimirobj();
        CBindado();
        ~CBindado();
};

class CTaxi:public CAuto{
    protected:
        int Taximetro;
    public:
        void SetTaximetro(int cad);
        virtual void imprimir();
        virtual void imprimirobj();
        CTaxi();
        ~CTaxi();
};

class CAutoparte:public CObjeto{
    protected:
        int num;
    public:
        void Setnum(int cad);
        virtual void imprimir();
        virtual void imprimirobj();
        CAutoparte();
        ~CAutoparte();
};

class CMotor:public CAutoparte{
    protected:
        int Cilindraje;
    public:
        void SetCilindraje(int cad);
        virtual void imprimir();
        virtual void imprimirobj();
        CMotor();
        ~CMotor();
};

class CLlanta:public CAutoparte{
    protected:
        int Tamano;
    public:
        void SetTamano(int cad);
        virtual void imprimir();
        virtual void imprimirobj();
        CLlanta();
        ~CLlanta();
};

#endif // CNODO_H_INCLUDED