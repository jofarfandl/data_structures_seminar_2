#include <iostream>
#include "CNodo.h"
#include "CLista.h"
#include "CIterador.h"
#include "CClase.h"


using namespace std;

void CObjeto::imprimirobj(){
    cout<<"\tConstruyendo un objeto"<<endl;
}

void CPersona::imprimirobj(){
    cout<<"\tConstruyendo una persona"<<endl;
}

void CAlumno::imprimirobj(){
    cout<<"\tConstruyendo un alumno"<<endl;
}

void CMaestro::imprimirobj(){
    cout<<"\tConstruyendo un maestro"<<endl;
}

void CAuto::imprimirobj(){
    cout<<"\tConstruyendo un auto"<<endl;
}

void CPatrulla::imprimirobj(){
    cout<<"\tConstruyendo una patrulla"<<endl;
}

void CBindado::imprimirobj(){
    cout<<"\tConstruyendo un blindado"<<endl;
}

void CTaxi::imprimirobj(){
    cout<<"\tConstruyendo un taxi"<<endl;
}

void CAutoparte::imprimirobj(){
    cout<<"\tConstruyendo una autoparte"<<endl;
}

void CMotor::imprimirobj(){
    cout<<"\tConstruyendo un motor"<<endl;
}

void CLlanta::imprimirobj(){
    cout<<"\tConstruyendo una llanta"<<endl;
}

void CObjeto::imprimir(){
    cout<<"\tObjeto"<<endl;
}
CObjeto::CObjeto(){}
CObjeto::~CObjeto(){}

void CPersona::imprimir(){
    cout<<"Nombre: "<<Nombre<<endl;
    cout<<""<<endl;
}
//--------------------------------------
CPersona::CPersona(){cout<<"\tConstruyendo una persona "<<endl;}
CPersona::~CPersona(){cout<<"\tDestruyendo una persona "<<endl;}

void CAlumno::imprimir(){
    cout<<"Nombre: "<<Nombre<<endl;
    cout<<"Codigo: "<<Codigo<<endl;
    cout<<""<<endl;
}

CAlumno::CAlumno(){cout<<"\tConstruyendo un alumno "<<endl;}
CAlumno::~CAlumno(){cout<<"\tDestruyendo un alumno"<<endl;}

void CMaestro::imprimir(){
    cout<<"Nombre: "<<Nombre<<endl;
    cout<<"Cedula: "<<Cedula<<endl;
    cout<<""<<endl;
}

CMaestro::CMaestro(){cout<<"\tConstruyendo un maestro"<<endl;}
CMaestro::~CMaestro(){cout<<"\tDestruyendo un maestro"<<endl;}

void CAuto::imprimir(){
    cout<<"Motor: "<<Motor<<endl;
    cout<<"Color: "<<Color<<endl;
    cout<<""<<endl;
}

CAuto::CAuto(){cout<<"\tConstruyendo un auto"<<endl;}
CAuto::~CAuto(){cout<<"\tDestruyendo un auto"<<endl;}

void CPatrulla::imprimir(){
    cout<<"Motor: "<<Motor<<endl;
    cout<<"Color: "<<Color<<endl;
    cout<<"Sirena: "<<Sirena<<endl;
    cout<<""<<endl;
}

CPatrulla::CPatrulla(){cout<<"\tConstruyendo una patrulla"<<endl;}
CPatrulla::~CPatrulla(){cout<<"\tDestruyendo una patrulla "<<endl;}

void CBindado::imprimir(){
    cout<<"Motor: "<<Motor<<endl;
    cout<<"Color: "<<Color<<endl;
    cout<<"Sirena: "<<Sirena<<endl;
    cout<<"Blindaje: "<<Blindaje<<endl;
    cout<<""<<endl;
}

CBindado::CBindado(){cout<<"\tConstruyendo un blindado"<<endl;}
CBindado::~CBindado(){cout<<"\tDestruyendo un blindado"<<endl;}

void CTaxi::imprimir(){
    cout<<"Motor: "<<Motor<<endl;
    cout<<"Color: "<<Color<<endl;
    cout<<"Taximetro: "<<Taximetro<<endl;
    cout<<""<<endl;
}

CTaxi::CTaxi(){cout<<"\tConstruyendo un taxi"<<endl;}
CTaxi::~CTaxi(){cout<<"\tDestruyendo un taxi"<<endl;}

void CAutoparte::imprimir(){
    cout<<"Numero: "<<num<<endl;
    cout<<""<<endl;
}

CAutoparte::CAutoparte(){cout<<"\tConstruyendo una autoparte"<<endl;}
CAutoparte::~CAutoparte(){cout<<"\tDestruyendo una autoparte "<<endl;}

void CMotor::imprimir(){
    cout<<"Numero: "<<num<<endl;
    cout<<"Cilindraje: "<<Cilindraje<<endl;
    cout<<""<<endl;
}

CMotor::CMotor(){cout<<"\tConstruyendo un motor"<<endl;}
CMotor::~CMotor(){cout<<"\tDestruyendo un motor"<<endl;}

void CLlanta::imprimir(){
    cout<<"Numero: "<<num<<endl;
    cout<<"Tamaño: "<<Tamano<<endl;
    cout<<""<<endl;
}

CLlanta::CLlanta(){cout<<"\tConstruyendo una llanta"<<endl;}
CLlanta::~CLlanta(){cout<<"\tDestuyendo una llanta "<<endl;}

//

void CPersona::Setnombre(string cad){
    Nombre = cad;
}

void CAlumno::SetCodigo(string cad){
    Codigo = cad;
}

void CMaestro::SetCedula(string cad){
    Cedula = cad;
}

void CPatrulla::Setsirena(int nd){
    Sirena = nd;
}

void CBindado::SetBlindaje(int nd){
    Blindaje = nd;
}

void CTaxi::SetTaximetro(int nd){
    Taximetro = nd;
}

void CAutoparte::Setnum(int nd){
    num = nd;
}

void CMotor::SetCilindraje(int nd){
    Cilindraje = nd;
    void imprimir();
}

void CLlanta::SetTamano(int nd){
    Tamano = nd;
}

void CAuto::SetColor(string cad,int nd){
    Color = cad;
    Motor = nd;
}


