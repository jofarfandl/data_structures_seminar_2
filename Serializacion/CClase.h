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
        virtual void imprimirobj();
        CObjeto(){};
        ~CObjeto(){};
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();

};
//---------------------------------------PERSONA Y DERIVADOS
#define CLSID_CPERSONA 700
class CPersona:public CObjeto{
    protected:
        string Nombre;
    public:
        void Setnombre(string cad);
        virtual void imprimir();
        virtual void imprimirobj();
        CPersona(){};
        ~CPersona(){};
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
};

#define CLSID_CALUMNO 701
class CAlumno:public CPersona{
    protected:
        string Codigo;
    public:
        void SetCodigo(string cad);
        virtual void imprimir();
        virtual void imprimirobj();
        CAlumno(){};
        ~CAlumno(){};
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
};

#define CLSID_CMAESTRO 702
class CMaestro:public CPersona{
    protected:
        string Cedula;
    public:
        void SetCedula(string cad);
        virtual void imprimir();
        virtual void imprimirobj();
        CMaestro(){};
        ~CMaestro(){};
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
};
//---------------------------------------AUTO Y DERIVADOS
#define CLSID_CAUTO 600
class CAuto:public CObjeto{
    protected:
        string Color;
        int Motor;
    public:
        void SetColor(string cad,int nd);
        virtual void imprimir();
        virtual void imprimirobj();
        CAuto(){};
        ~CAuto(){};
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
};
#define CLSID_CPATRULLA 601
class CPatrulla:public CAuto{
    protected:
        int Sirena;
    public:
        void Setsirena(int cad);
        virtual void imprimir();
        virtual void imprimirobj();
        CPatrulla(){};
        ~CPatrulla(){};
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
};
#define CLSID_CBLINDADO 602
class CBlindado:public CPatrulla{
    protected:
        int Blindaje;
    public:
        void SetBlindaje(int cad);
        virtual void imprimir();
        virtual void imprimirobj();
        CBlindado(){};
        ~CBlindado(){};
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
};
#define CLSID_CTAXI 603
class CTaxi:public CAuto{
    protected:
        int Taximetro;
    public:
        void SetTaximetro(int cad);
        virtual void imprimir();
        virtual void imprimirobj();
        CTaxi(){};
        ~CTaxi(){};
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
};
//---------------------------------------AUTOPARTES Y DERIVADOS
#define CLSID_CAUTOPARTE 500
class CAutoparte:public CObjeto{
    protected:
        int Numero;
    public:
        void Setnum(int cad);
        virtual void imprimir();
        virtual void imprimirobj();
        CAutoparte(){};
        ~CAutoparte(){};
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
};
#define CLSID_CMOTOR 501
class CMotor:public CAutoparte{
    protected:
        int Cilindraje;
    public:
        void SetCilindraje(int cad);
        virtual void imprimir();
        virtual void imprimirobj();
        CMotor(){};
        ~CMotor(){};
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
};
#define CLSID_CLLANTA 502
class CLlanta:public CAutoparte{
    protected:
        int Tamanio;
    public:
        void SetTamano(int cad);
        virtual void imprimir();
        virtual void imprimirobj();
        CLlanta(){};
        ~CLlanta(){};
        virtual void Salvar(fstream& out);
        virtual void Cargar(fstream& in);
        virtual int GetCLSID();
};

#endif // COBJETO_COBJETO_H
