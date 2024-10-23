#include <iostream>
#include <fstream>
#include "CNodo.h"
#include "CLista.h"
#include "CIterador.h"
#include "CClase.h"

using namespace std;


void CObjeto::imprimir(){
    cout<<"Objeto"<<endl;
};

void CObjeto::Salvar(fstream& out){//linea 196
    out<<GetCLSID()<<endl;
};
void CObjeto::Cargar(fstream& in){};
int CObjeto::GetCLSID(){
    return CLSID_OBJETO;
};


//--------------------------------------
void CPersona::imprimir(){
    cout<<"Nombre: "<<Nombre<<endl<<endl;
};

void CPersona :: Salvar(fstream& out){
    out << GetCLSID() << endl;
    out << Nombre << endl;
};

void CPersona :: Cargar(fstream& in){
    in >> Nombre;
};
int CPersona :: GetCLSID(){
    return CLSID_CPERSONA;
}

//--------------------------------------

void CAlumno::imprimir(){
    cout<<"Nombre: "<<Nombre<<endl;
    cout<<"Codigo: "<<Codigo<<endl;
}

void CAlumno :: Salvar(fstream& out){
    out << GetCLSID() << endl;
    out << Nombre << endl;
    out << Codigo << endl;
};
void CAlumno :: Cargar(fstream& in){
    in >> Nombre;
    in >> Codigo; 
};
int CAlumno :: GetCLSID(){
    return CLSID_CALUMNO;
}

//--------------------------------------

void CMaestro::imprimir(){
    cout<<"Nombre: "<<Nombre<<endl;
    cout<<"Cedula: "<<Cedula<<endl;
}

void CMaestro :: Salvar(fstream& out){
    out << GetCLSID() << endl;
    out << Nombre << endl;
    out << Cedula << endl;
};
void CMaestro :: Cargar(fstream& in){
    in >> Nombre;
    in >> Cedula;
};
int CMaestro :: GetCLSID(){
    return CLSID_CMAESTRO;
}

//--------------------------------------

void CAuto::imprimir(){
    cout<<"Motor: "<<Motor<<endl;
    cout<<"Color: "<<Color<<endl;
}
void CAuto :: Cargar(fstream& out){
    out << GetCLSID() << endl;
    out << Motor << endl;
    out << Color << endl;
};

void CAuto :: Salvar(fstream& in){
    in >> Motor;
    in >> Color;
};
int CAuto :: GetCLSID(){
    return CLSID_CAUTO;
};

//--------------------------------------

void CPatrulla::imprimir(){
    cout<<"Motor: "<<Motor<<endl;
    cout<<"Color: "<<Color<<endl;
    cout<<"Sirena: "<<Sirena<<endl;
}

void CPatrulla :: Salvar(fstream& out){
    out << GetCLSID() << endl;
    out << Motor <<endl;
    out << Color << endl;
    out << Sirena << endl;
};

void CPatrulla :: Cargar(fstream& in){
    in >> Motor;
    in >> Color;
    in >> Sirena;
};
int CPatrulla :: GetCLSID(){
    return CLSID_CPATRULLA;
}

//--------------------------------------

void CBlindado::imprimir(){
    cout<<"Motor: "<<Motor<<endl;
    cout<<"Color: "<<Color<<endl;
    cout<<"Sirena: "<<Sirena<<endl;
    cout<<"Blindaje: "<<Blindaje<<endl;
}

void CBlindado :: Salvar(fstream& out){
    out << GetCLSID() << endl;
    out << Motor << endl;
    out << Color << endl;
    out << Sirena << endl;
    out << Blindaje <<endl;
};

void CBlindado :: Cargar(fstream& in){
    in >> Motor;
    in >> Color;
    in >> Sirena;
    in >> Blindaje;
};
int CBlindado :: GetCLSID(){
    return CLSID_CBLINDADO;
}

//--------------------------------------

void CTaxi::imprimir(){
    cout<<"Motor: "<<Motor<<endl;
    cout<<"Color: "<<Color<<endl;
    cout<<"Taximetro: "<<Taximetro<<endl;
}

void CTaxi :: Salvar(fstream& out){
    out << GetCLSID() << endl;
    out << Motor <<endl;
    out << Color << endl;
    out << Taximetro << endl;
};

void CTaxi :: Cargar(fstream& in){
    in >> Motor;
    in >> Color;
    in >> Taximetro;
};
int CTaxi :: GetCLSID(){
    return CLSID_CTAXI;
}

//--------------------------------------

void CAutoparte::imprimir(){
    cout<<"Numero: "<<Numero<<endl;
}

void CAutoparte :: Salvar(fstream& out){
    out << GetCLSID() << endl;
    out << Numero << endl;
};

void CAutoparte :: Cargar(fstream& in){
    in >> Numero;
};
int CAutoparte :: GetCLSID(){
    return CLSID_CAUTOPARTE;
}

//--------------------------------------

void CMotor::imprimir(){
    cout<<"Numero: "<<Numero<<endl;
    cout<<"Cilindraje: "<<Cilindraje<<endl;
}
void CMotor :: Salvar(fstream& out){
    out << GetCLSID() << endl;
    out << Numero << endl;
    out << Cilindraje << endl;
};
void CMotor :: Cargar(fstream& in){
    in >> Numero;
    in >> Cilindraje;
};
int CMotor :: GetCLSID(){
    return CLSID_CMOTOR;
}

//--------------------------------------

void CLlanta::imprimir(){
    cout<<"Numero: "<<Numero<<endl;
    cout<<"Tamaño: "<<Tamanio<<endl;
}

void CLlanta :: Salvar(fstream& out){
    out << GetCLSID() << endl;
    out << Numero << endl;
    out << Tamanio << endl;
};
void CLlanta :: Cargar(fstream& in){
    in >> Numero;
    in >> Tamanio;
};
int CLlanta :: GetCLSID(){
    return CLSID_CLLANTA;
}


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

void CBlindado::SetBlindaje(int nd){
    Blindaje = nd;
}

void CTaxi::SetTaximetro(int nd){
    Taximetro = nd;
}

void CAutoparte::Setnum(int nd){
    Numero = nd;
}

void CMotor::SetCilindraje(int nd){
    Cilindraje = nd;
}

void CLlanta::SetTamano(int nd){
    Tamanio = nd;
}

void CAuto::SetColor(string cad,int nd){
    Color = cad;
    Motor = nd;
}


void CObjeto::imprimirobj(){
    cout<<"soy objeto"<<endl;
}

void CPersona::imprimirobj(){
    cout<<"soy persona"<<endl;
}

void CAlumno::imprimirobj(){
    cout<<"soy Alumno"<<endl;
}

void CMaestro::imprimirobj(){
    cout<<"soy Maestro"<<endl;
}

void CAuto::imprimirobj(){
    cout<<"soy Auto"<<endl;
}

void CPatrulla::imprimirobj(){
    cout<<"soy Patrulla"<<endl;
}

void CBlindado::imprimirobj(){
    cout<<"soy Blindado"<<endl;
}

void CTaxi::imprimirobj(){
    cout<<"soy Taxi"<<endl;
}

void CAutoparte::imprimirobj(){
    cout<<"soy Autoparte"<<endl;
}

void CMotor::imprimirobj(){
    cout<<"soy Motor"<<endl;
}

void CLlanta::imprimirobj(){
    cout<<"soy Llanta"<<endl;
}
