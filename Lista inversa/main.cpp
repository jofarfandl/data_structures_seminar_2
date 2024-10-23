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
    int band=0,opc=0,Anios=0;
    string Nombre,Ciudad,Carrera,Codigo;
    CLista *lista=new CLista();
    CLista *lista2=new CLista();
    CLista2 *list=new CLista2();
    CIterador it;
    CPersona *P1;
    
    fstream salida("Datos.txt",ios_base::out);
    fstream entrada("Datos.txt",ios_base::in);
    do{
        system("cls");
        CObjeto* obj = 0;
        menu();
        cin >> opc;
        switch(opc){
            case 1:
                cout << "Nombre: " << endl;
                cin >> Nombre;
                cout << "Anios: " << endl;
                cin >> Anios;
                cout << "Ciudad: " << endl;
                cin >> Ciudad;
                cout << "Carrera: " << endl;
                cin >> Carrera;
                cout << "Codigo: " << endl;
                cin >> Codigo;
                P1=new CPersona;
                P1->Setnombre(Nombre,Anios,Codigo,Ciudad,Carrera);
                obj=P1;

                if(lista->verificar(Anios,obj)==true){
                    cout << "Dato agregado a lista" << endl;
                    system("pause");
                }
                else{
                    list=new CLista2;
                    list->Insertar(obj);
                    lista->InsertarAlFinal(Anios,list);
                    cout << "Dato agregado a lista" << endl;
                    system("pause");
                }
                system("cls");
            break;
            case 2:
                system("cls");
                lista->imprimir();
                system("pause");
            break;
            case 3:
                lista->Salvar(salida);
                band=1;
                cout << "Datos Salvados exitosamente" << endl;
                system("pause");
            break;
            case 4:
            system("cls");
                if (band==1){
                    int CLSID=0;
                    entrada>>CLSID;
                    lista2->Cargar(entrada);
                    lista2->imprimir();
                }
                else{
                    cout<<"Lista no salvada"<<endl;
                    system("pause");
                }
            break;
            case 0:
                cout<<"Fin del programa."<<endl;
            break;
            default:
                cout << "ERROR... Opcion invalida" << endl;
        system("cls");
        }
    }while(opc != 0);
    salida.close();
    entrada.close();
    lista->~CLista();
    lista2->~CLista();
    list->~CLista2();
    return 0;
}

void menu(){
    system("cls");
    cout << "\tMENU:" << endl;
    cout << "1.-Ingresar una nueva persona" << endl;
    cout << "2.-Imprimir los datos" << endl;
    cout << "3.-Salvar" << endl;
    cout << "4.-Cargar" << endl;
    cout << "0.-SALIR" << endl;
    cout << "Ingrese una opcion valida: " << endl;
}
