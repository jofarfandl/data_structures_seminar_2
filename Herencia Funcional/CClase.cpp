#include <iostream>
#include "CNodo.h"
#include "CLista.h"
#include "CIterador.h"
#include "CClase.h"


using namespace std;

void CObjeto::imprimirobj(){
    cout<<"Construyendo un objeto"<<endl;
}

void CPersona::imprimirobj(){
    cout<<"Construyendo una persona"<<endl;
}

void CAlumno::imprimirobj(){
    cout<<"Construyendo un alumno"<<endl;
}

void CMaestro::imprimirobj(){
    cout<<"Construyendo un maestro"<<endl;
}

void CAuto::imprimirobj(){
    cout<<"Construyendo un auto"<<endl;
}

void CPatrulla::imprimirobj(){
    cout<<"Construyendo una patrulla"<<endl;
}

void CBindado::imprimirobj(){
    cout<<"Construyendo un blindado"<<endl;
}

void CTaxi::imprimirobj(){
    cout<<"Construyendo un taxi"<<endl;
}

void CAutoparte::imprimirobj(){
    cout<<"Construyendo una autoparte"<<endl;
}

void CMotor::imprimirobj(){
    cout<<"Construyendo un motor"<<endl;
}

void CLlanta::imprimirobj(){
    cout<<"Construyendo una llanta"<<endl;
}

void CObjeto::imprimir(){
    cout<<"Objeto"<<endl;
}
CObjeto::CObjeto(){}
CObjeto::~CObjeto(){}

void CPersona::imprimir(){
    cout<<"Nombre: "<<Nombre<<endl<<endl;
    
}

CPersona::CPersona(){}
CPersona::~CPersona(){}

void CAlumno::imprimir(){
    cout<<"Nombre: "<<Nombre<<endl;
    cout<<"Codigo: "<<Codigo<<endl;
}

CAlumno::CAlumno(){}
CAlumno::~CAlumno(){}

void CMaestro::imprimir(){
    cout<<"Nombre: "<<Nombre<<endl;
    cout<<"Cedula: "<<Cedula<<endl;
}

CMaestro::CMaestro(){}
CMaestro::~CMaestro(){}

void CAuto::imprimir(){
    cout<<"Motor: "<<Motor<<endl;
    cout<<"Color: "<<Color<<endl;
}

CAuto::CAuto(){}
CAuto::~CAuto(){}

void CPatrulla::imprimir(){
    cout<<"Motor: "<<Motor<<endl;
    cout<<"Color: "<<Color<<endl;
    cout<<"Sirena: "<<Sirena<<endl;
}

CPatrulla::CPatrulla(){}
CPatrulla::~CPatrulla(){}

void CBindado::imprimir(){
    cout<<"Motor: "<<Motor<<endl;
    cout<<"Color: "<<Color<<endl;
    cout<<"Sirena: "<<Sirena<<endl;
    cout<<"Blindaje: "<<Blindaje<<endl;
}

CBindado::CBindado(){}
CBindado::~CBindado(){}

void CTaxi::imprimir(){
    cout<<"Motor: "<<Motor<<endl;
    cout<<"Color: "<<Color<<endl;
    cout<<"Taximetro: "<<Taximetro<<endl;
}

CTaxi::CTaxi(){}
CTaxi::~CTaxi(){}

void CAutoparte::imprimir(){
    cout<<"Numero: "<<num<<endl;
}

CAutoparte::CAutoparte(){}
CAutoparte::~CAutoparte(){}

void CMotor::imprimir(){
    cout<<"Numero: "<<num<<endl;
    cout<<"Cilindraje: "<<Cilindraje<<endl;
}

CMotor::CMotor(){}
CMotor::~CMotor(){}

void CLlanta::imprimir(){
    cout<<"Numero: "<<num<<endl;
    cout<<"Tamaño: "<<Tamano<<endl;
}

CLlanta::CLlanta(){}
CLlanta::~CLlanta(){}

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


