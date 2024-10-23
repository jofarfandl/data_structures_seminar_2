#include <iostream>
#include <cstdlib>
#include <string.h>
#include <fstream>
#include "CClase.h"
#include "CClase.cpp"
#include "CArbol.h"
#include "CArbol.cpp"
#include "CHash.h"
#include "CHash.cpp"

using namespace std;


void menu(){
    system("cls");
    cout << "\tMENU:" << endl;
    cout << "1.-Ingresar una Nueva ciudad" << endl;
    cout << "2.-Eliminar una Ciudad" << endl;
    cout << "3.-Mostrar Ciudades" << endl;
    cout << "4.-Buscar una ciudad" << endl;
    cout << "5.-Salvar" << endl;
    cout << "6.-Cargar" << endl;
    cout << "0.-SALIR" << endl;
    cout << "Ingrese una opcion valida: " << endl;
}

int main(){
    fstream salida("datos.txt",ios_base::out);
    fstream entrada("datos.txt",ios_base::in);
    CHash* tabla=new CHash();
    int ID, Atracciones, cont=0,CLSID=0,index,opc;
    float Precio;
    double PIB;
    string Nombre;

    CCiudad *C1,*C2;
    do{
        system("cls");
        menu();
        cin>> opc;
        switch(opc){
            case 1:
                cout << "Nombre: " << endl;
                cin >> Nombre;
                cout << "Precio: " << endl;
                cin >> Precio;
                cout << "PIB: " << endl;
                cin >> PIB;
                cout << "Atracciones: " << endl;
                cin >> Atracciones;
                C1 = new CCiudad;
                C1->SetCiudad(Nombre,cont+1,Precio,PIB,Atracciones);
                index = tabla->dispersion(C1);
                tabla->insert(index,C1);
                break;
            case 2:
                cout << " Valor a eliminar: ";
                cout << "Nombre: " << endl;
                cin >> Nombre;
                C1 = new CCiudad;
                C1->SetCiudad(Nombre,NULL,NULL,NULL,NULL);
                index = tabla->dispersion(C1);
                C2 = tabla->locate(index,C1);
                tabla->Delete(index,C2);
                cont--;
                break;
            case 3:
                tabla->show();
                system("pause");
                break;
            case 4:
                cout << " Valor a buscar: ";
                cout << "Nombre: " << endl;
                cin >> Nombre;
                C1 = new CCiudad;
                C1->SetCiudad(Nombre,NULL,NULL,NULL,NULL);
                index = tabla->dispersion(C1);
                if (tabla->find(index, C1) == true){
                    cout << "Valor encontrado" << endl;
                }
                else
                    cout << "Valor NO encontrado" << endl;
                system("pause");
                break;
            case 5:
                tabla->Salvar(salida);
                break;
            case 6:
                CLSID = 0;
                entrada >> CLSID;
                tabla->Cargar(entrada);
                tabla->show();
                system("pause");
                break;
            case 0:
                cout << "Fin del Programa..." << endl;
                exit(0);
            system("pause");
        }
    }while(opc != 0);
    salida.close();
    entrada.close();
    return 0;
}