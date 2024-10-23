#include <iostream>
#include <fstream>
#include "CNodo.h"
#include "CLista.h"
#include "CIterador.h"
#include "CClase.h"

using namespace std;

void CObjeto::imprimir(){
    cout << "--------" << endl;
};

void CObjeto::Salvar(fstream& out){
    out<<GetCLSID()<<endl;
};
void CObjeto::Cargar(fstream& in){};

int CObjeto::GetCLSID(){
    return CLSID_OBJETO;
};

void CPersona::Setnombre(string _Nombre, float _Anios, string _Codigo, string _Ciudad, string _Carrera){
    Nombre = _Nombre;
    Anios = _Anios;
    Codigo =_Codigo;
    Ciudad = _Ciudad;
    Carrera = _Carrera;
}
void CPersona::imprimir(){
    cout << "Nombre: " << Nombre << endl;
    cout << "Anios: " << Anios << endl;
    cout << "Codigo: " << Codigo << endl;
    cout << "Ciudad: " << Ciudad << endl;
    cout << "Carrera: " << Carrera << endl << endl;
};

void CPersona :: Salvar(fstream& out){
    out << GetCLSID() << endl;
    out << Nombre << endl;
    out << Anios << endl;
    out << Codigo << endl;
    out << Ciudad << endl;
    out << Carrera << endl;
};

void CPersona :: Cargar(fstream& in){
    in >> Nombre;
    in >> Anios;
    in >> Codigo;
    in >> Ciudad;
    in >> Carrera;

};
int CPersona :: GetCLSID(){
    return CLSID_CPERSONA;
}