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

    C1 = new CCiudad;
    C1->SetCiudad("Dublin",cont+1,2029,60000000,4);
    index = tabla->FunDispersion(C1);
    tabla->insert(index,C1);

    C1 = new CCiudad;
    C1->SetCiudad("Amsterdam",cont+1,2233,595540,5);
    index = tabla->FunDispersion(C1);
    tabla->insert(index,C1);

    C1 = new CCiudad;
    C1->SetCiudad("Sevilla",cont+1,1217,38215048,2);
    index = tabla->FunDispersion(C1);
    tabla->insert(index,C1);

    C1 = new CCiudad;
    C1->SetCiudad("Berlin",cont+1,1459,153291000,3);
    index = tabla->FunDispersion(C1);
    tabla->insert(index,C1);

    C1 = new CCiudad;
    C1->SetCiudad("Atenas",cont+1,2337,165830000,3);
    index = tabla->FunDispersion(C1);
    tabla->insert(index,C1);

    C1 = new CCiudad;
    C1->SetCiudad("Estambul",cont+1,1001,348721000,5);
    index = tabla->FunDispersion(C1);
    tabla->insert(index,C1);

    C1 = new CCiudad;
    C1->SetCiudad("Tromso",cont+1,2969,32159000,4);
    index = tabla->FunDispersion(C1);
    tabla->insert(index,C1);

    C1 = new CCiudad;
    C1->SetCiudad("Moscu",cont+1,1750,1288690,6);
    index = tabla->FunDispersion(C1);
    tabla->insert(index,C1);

    C1 = new CCiudad;
    C1->SetCiudad("Hong_kong",cont+1,1817,36570000,4);
    index = tabla->FunDispersion(C1);
    tabla->insert(index,C1);

    C1 = new CCiudad;
    C1->SetCiudad("Tokio",cont+1,4800,1617000,5);
    index = tabla->FunDispersion(C1);
    tabla->insert(index,C1);

    C1 = new CCiudad;
    C1->SetCiudad("Monterrey",cont+1,900,128896000,4);
    index = tabla->FunDispersion(C1);
    tabla->insert(index,C1);

    C1 = new CCiudad;
    C1->SetCiudad("San_Francisco",cont+1,2400,150004000,4);
    index = tabla->FunDispersion(C1);
    tabla->insert(index,C1);

    C1 = new CCiudad;
    C1->SetCiudad("Toronto",cont+1,2000,24000000,3);
    index = tabla->FunDispersion(C1);
    tabla->insert(index,C1);

    C1 = new CCiudad;
    C1->SetCiudad("Cairo",cont+1,1350,316798000,2);
    index = tabla->FunDispersion(C1);
    tabla->insert(index,C1);

    C1 = new CCiudad;
    C1->SetCiudad("Madrid",cont+1,1700,215397000,4);
    index = tabla->FunDispersion(C1);
    tabla->insert(index,C1);


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
                index = tabla->FunDispersion(C1);
                tabla->insert(index,C1);
                break;
            case 2:
                cout << "Nombre de la ciudad a eliminar: " << endl;
                cin >> Nombre;
                C1 = new CCiudad;
                C1->SetCiudad(Nombre,NULL,NULL,NULL,NULL);
                index = tabla->FunDispersion(C1);
                C2 = tabla->locate(index,C1);
                tabla->Eliminar(index,C2);
                cont--;
                break;
            case 3:
                tabla->ver();
                system("pause");
                break;
            case 4:
                cout << "Ingrese el nombre de la ciudad a buscar: " << endl;
                cin >> Nombre;
                C1 = new CCiudad;
                C1->SetCiudad(Nombre,NULL,NULL,NULL,NULL);
                index = tabla->FunDispersion(C1);
                if (tabla->Buscar(index, C1) == true){
                    cout << "Ciudad encontrada" << endl;
                }
                else
                    cout << "Ciudad no encontrada" << endl;
                system("pause");
                break;
            case 5:
                tabla->Salvar(salida);
                break;
            case 6:
                CLSID = 0;
                entrada >> CLSID;
                tabla->Cargar(entrada);
                tabla->ver();
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