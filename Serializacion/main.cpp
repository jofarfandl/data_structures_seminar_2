#include <iostream>
#include <cstdlib>
#include <string.h>
#include "CNodo.h"
#include "CLista.h"
#include "CIterador.h"
#include "CClase.h"
#include "CNodo.cpp"
#include "CLista.cpp"
#include "CIterador.cpp"
#include "CClase.cpp"
#include <fstream>

using namespace std;
void menu();

int main(){
    CLista *lista=new CLista();
    CLista *lista2=new CLista();
    CIterador it;
    int band=0,opc,opc2;
    string Nombre,Codigo,Cedula,Color;
    int Motor=0,Sirena=0,Blindaje=0,Taximetro=0,Numero=0,Cilindraje=0,Tamanio=0;

    fstream salida("Datos.txt",ios_base::out);
    fstream entrada("Datos.txt",ios_base::in);
    do{
        CObjeto* obj = 0;
        system("cls");
        cout << "\t\tSERIALIZACION: ALMACENAMIENTO ESTRUCTURADO" << endl;
        cout << "1.-Crear un objeto" << endl;
        cout << "2.-Cargar" << endl;
        cout << "3.-Salvar" << endl;
        cout << "0. SALIR" << endl;
        cin >> opc;
        switch(opc){
            case 1:
                menu();
                cin >> opc2;
                switch(opc2){
                    case 1:
                        CPersona *P;
                        cout << "Nombre: " << endl;
                        cin>>Nombre;
                        P=new CPersona;
                        P->Setnombre(Nombre);
                        obj=P;
                        lista->InsertarAlFinal(obj);
                        break;
                    case 2:
                        CAlumno *A;
                        cout << "Nombre: " << endl;
                        cin>>Nombre;
                        cout << "Codigo: " << endl;
                        cin>>Codigo;
                        A=new CAlumno;
                        A->Setnombre(Nombre);
                        A->SetCodigo(Codigo);
                        obj=A;
                        lista->InsertarAlFinal(obj);
                        break;
                    case 3:
                        CMaestro *M;
                        cout << "Nombre: " << endl;
                        cin>>Nombre;
                        cout << "Cedula: " << endl;
                        cin>>Cedula;
                        M=new CMaestro;
                        M->Setnombre(Nombre);
                        M->SetCedula(Cedula);
                        obj=M;
                        lista->InsertarAlFinal(obj);
                        break;
                    case 4:
                        CAuto *Au;
                        cout << "Color: " << endl;
                        cin>>Color;
                        cout << "Motor: " << endl;
                        cin>>Motor;
                        Au=new CAuto;
                        Au->SetColor(Color,Motor);
                        obj=Au;
                        lista->InsertarAlFinal(obj);
                        break;
                    case 5:
                        CPatrulla *Pa;
                        cout << "Color: " << endl;
                        cin>>Color;
                        cout << "Motor: " << endl;
                        cin>>Motor;
                        cout << "Sirena: " << endl;
                        cin>>Sirena;
                        Pa=new CPatrulla;
                        Pa->SetColor(Color,Motor);
                        Pa->Setsirena(Sirena);
                        obj=Pa;
                        lista->InsertarAlFinal(obj);
                        break;
                    case 6:
                        CBlindado *B;
                        cout << "Color: " << endl;
                        cin>>Color;
                        cout << "Motor: " << endl;
                        cin>>Motor;
                        cout << "Sirena: " << endl;
                        cin>>Sirena;
                        cout << "Blindaje: " << endl;
                        cin>>Blindaje;
                        B=new CBlindado;
                        B->SetColor(Color,Motor);
                        B->Setsirena(Sirena);
                        B->SetBlindaje(Blindaje);
                        obj=B;
                        lista->InsertarAlFinal(obj);
                        break;
                    case 7:
                        CTaxi *T;
                        cout << "Color: " << endl;
                        cin>>Color;
                        cout << "Motor: " << endl;
                        cin>>Motor;
                        cout << "Taximetro: " << endl;
                        cin>>Taximetro;
                        T=new CTaxi;
                        T->SetColor(Color,Motor);
                        T->SetTaximetro(Taximetro);
                        obj=T;
                        lista->InsertarAlFinal(obj);
                        break;
                    case 8:
                        CAutoparte *Aut;
                        cout << "Numero: " << endl;
                        cin>>Numero;
                        Aut=new CAutoparte;
                        Aut->Setnum(Numero);
                        obj=Aut;
                        lista->InsertarAlFinal(obj);
                        break;
                    case 9:
                        CMotor *Mo;
                        cout << "Numero: " << endl;
                        cin>>Numero;
                        cout << "Cilindraje: " << endl;
                        cin>>Cilindraje;
                        Mo=new CMotor;
                        Mo->Setnum(Numero);
                        Mo->SetCilindraje(Cilindraje);
                        obj=Mo;
                        lista->InsertarAlFinal(obj);
                        break;
                    case 10:
                        CLlanta *L;
                        cout << "Numero: " << endl;
                        cin>>Numero;
                        cout << "Tamano: " << endl;
                        cin>> Tamanio;
                        L=new CLlanta;
                        L->Setnum(Numero);
                        L->SetTamano(Tamanio);
                        obj=L;
                        lista->InsertarAlFinal(obj);
                        break;
                }
            break;
            case 2:
                lista->Salvar(salida);
                band=1;
            break;
            case 3:
                if (band == 1){
                    int CLSID=0;
                    entrada>>CLSID;
                    lista2->Cargar(entrada);
                    lista2->Imprimir();
                    system("pause");
                }else{
                    cout << "Lista no salvada" << endl;
                    system("pause");}
            break;
            case 0:
                cout << "Fin del programa" << endl;
            break;

            default:
                cout << "ERROR... Opcion invalida" << endl;
            break;
        }

    }while(opc != 0);
    salida.close();
    entrada.close();
    system("pause");
    lista->~CLista();
    lista2->~CLista();
    return 0;
}


void menu(){
    system("cls");
    cout << "Tipos de Objetos:" << endl;
    cout << "1.-CPersona" << endl;
    cout << "2.-CAlumno" << endl;
    cout << "3.-CMaestro" << endl;
    cout << "4.-CAuto" << endl;
    cout << "5.-CPatrulla" << endl;
    cout << "6.-CBlindado" << endl;
    cout << "7.-CTaxi" << endl;
    cout << "8.-CAutoparte" << endl;
    cout << "9.-CMotor" << endl;
    cout << "10.-CLlanta" << endl;
    cout << "Ingrese el tipo de Objeto a crear" << endl;
}
