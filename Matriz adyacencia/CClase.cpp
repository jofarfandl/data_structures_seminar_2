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

void CCiudad::SetCiudad(string _Nombre, int _ID, float _Precio, double _PIB, int _Atracciones){
    Nombre = _Nombre;
    ID = _ID;
    Precio =_Precio;
    PIB = _PIB;
    Atracciones = _Atracciones;
}
void CCiudad :: imprimir(){
    cout << "Nombre: " << Nombre << endl;
    cout << "ID: " << ID << endl;
    cout << "Precio: " << Precio << endl;
    cout << "PIB: " << PIB << endl;
    cout << "Atracciones: " << Atracciones << endl << endl;
};

void CCiudad :: imprimirNom(){
    cout << "Ciudad: " << Nombre << endl;
}

void CCiudad :: Salvar(fstream& out){
    out << GetCLSID() << endl;
    out << Nombre << endl;
    out << ID << endl;
    out << Precio << endl;
    out << PIB << endl;
    out << Atracciones << endl;
};

void CCiudad :: Cargar(fstream& in){
    in >> Nombre;
    in >> ID;
    in >> Precio;
    in >> PIB;
    in >> Atracciones;

};
int CCiudad :: GetCLSID(){
    return CLSID_CCiudad;
}

string CCiudad :: GetNombre(){
    return Nombre;
}

int CCiudad :: GetID(){
    return ID;
}