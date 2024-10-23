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

void menu(){
    system("cls");
    cout << "\tMENU:" << endl;
    cout << "1.-Nueva Ciudad" << endl;
    cout << "2.-Ingresar una nueva conexion de ciudades" << endl;
    cout << "3.-Mostrar Matriz y sus conecciones en el grafo" << endl;
    cout << "4.-Mostrar Ciudades" << endl;
    cout << "0.-SALIR" << endl;
    cout << "Ingrese una opcion valida: " << endl;
}

int main(){
    float arreglo[20][20];
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            arreglo[i][j]=0;
        }
    }
    CCiudad **ciudades=new CCiudad*[20];

    int Atracciones, cont=0, opc, j;
    float Precio, Distancia;
    double PIB;
    string Nombre,Ciudad;

    CCiudad *C1;
    CObjeto* obj = 0;
    string nombre,ciudad,auxc;
    fstream salida("Datos.txt",ios_base::out);
    fstream entrada("Datos.txt",ios_base::in);

    C1=new CCiudad;
    C1->SetCiudad("Dublin",cont+1,2029,60000000,4);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][2]=arreglo[2][cont]=961;
    cont++;

    C1=new CCiudad;
    C1->SetCiudad("Amsterdam",cont+1,2233,595540,5);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][3]=arreglo[3][cont]=656;
    cont++;

    C1=new CCiudad;
    C1->SetCiudad("Sevilla",cont+1,1217,38215048,2);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][2]=arreglo[2][cont]=2330;
    cont++;

    C1=new CCiudad;
    C1->SetCiudad("Berlin",cont+1,1459,153291000,3);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][7]=arreglo[7][cont]=2582;
    cont++;

    C1=new CCiudad;
    C1->SetCiudad("Atenas",cont+1,2337,165830000,3);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][4]=arreglo[4][cont]=3659;
    cont++;
    
    C1=new CCiudad;
    C1->SetCiudad("Estambul",cont+1,1001,348721000,5);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][7]=arreglo[7][cont]=4762;
    cont++;

    C1=new CCiudad;
    C1->SetCiudad("Tromso",cont+1,2969,32159000,4);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][7]=arreglo[7][cont]=2582;
    cont++;

    C1=new CCiudad;
    C1->SetCiudad("Moscu",cont+1,1750,1288690,6);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][3]=arreglo[3][cont]=1813;
    cont++;

    C1=new CCiudad;
    C1->SetCiudad("Hong_kong",cont+1,1817,36570000,4);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][9]=arreglo[9][cont]=2884;
    cont++;

    C1=new CCiudad;
    C1->SetCiudad("Tokio",cont+1,4800,1617000,5);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][9]=arreglo[9][cont]=2884;
    cont++;

    C1=new CCiudad;
    C1->SetCiudad("Monterrey",cont+1,900,128896000,4);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][15]=arreglo[15][cont]=1130;
    cont++;

    C1=new CCiudad;
    C1->SetCiudad("San_Francisco",cont+1,2400,150004000,4);
    obj=C1;
    ciudades[cont]=C1;
    cont++;

    C1=new CCiudad;
    C1->SetCiudad("Toronto",cont+1,2000,24000000,3);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][9]=arreglo[9][cont]=7480;
    cont++;

    C1=new CCiudad;
    C1->SetCiudad("Cairo",cont+1,1350,316798000,2);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][4]=arreglo[4][cont]=3659;
    cont++;

    C1=new CCiudad;
    C1->SetCiudad("Madrid",cont+1,1700,215397000,4);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][2]=arreglo[2][cont]=2330;
    cont++;


    do{
        system("cls");
        int i=0,j=0;
        CObjeto* obj2 = 0;
        menu();
        cin>>opc;
        switch(opc){
            case 1:
                cout << "Nombre: " << endl;
                cin >> Nombre;
                cout << "Precio: " << endl;
                cin >> Precio;
                cout << "PIB" << endl;
                cin >> PIB;
                cout << "Atracciones" << endl;
                cin >> Atracciones;

                C1=new CCiudad;
                C1->SetCiudad(Nombre,cont+1,Precio,PIB,Atracciones);
                obj2=C1;
                ciudades[cont]=C1;
                
                cout << "Ingrese el nombre de la ciudad con la cual se conecta en el grafo:";
                cin >> ciudad;
                for(j=0;j<cont;j++){
                    auxc=ciudades[j]->GetNombre();
                    if(auxc==ciudad){
                        break;
                    }
                }
                cout << "Ingrese la Distancia";
                cin >> Distancia;
                arreglo[cont][j]=Distancia;
                cont++;
                break;
            case 2:
                cout << "Ingrese la ciudad de partida" << endl;
                cin >> ciudad;
                for(i=0;i<cont;i++){
                    auxc=ciudades[i]->GetNombre();
                    if(auxc==ciudad){
                        break;
                    }
                }
                cout<<"Ingrese la ciudad de destino" << endl;
                cin>>ciudad;
                for(j=0;j<cont;j++){
                    auxc=ciudades[j]->GetNombre();
                    if(auxc==ciudad){
                        break;
                    }
                }
                cout << "Ingrese la Distancia";
                cin >> Distancia;
                arreglo[i][j]=Distancia;
                break;
            case 3:
                for(int i=0 ; i<cont ; i++){//matriz
                    for(int j=0 ; j<cont ; j++){
                        cout << arreglo[i][j] << " ";
                    }cout << endl;
                }

                for(int i=0;i<cont;i++){//datos
                    cout<<endl;
                    cout<<"\tPartida:"<<endl;
                    ciudades[i]->imprimirNom();
                    cout<<"\ta"<<endl;
                    for(int j=0;j<cont;j++){
                        if(arreglo[i][j]!=0){
                            ciudades[j]->imprimirNom();
                        }
                    }cout<<"****************"<<endl;
                }
                system("pause");
                break;
            case 4:
                for(int i=0;i<cont;i++){
                    ciudades[i]->imprimir();
                }
                system("pause");
                break;

            case 0:
                cout<<"Fin del Programa..."<<endl;
                exit(0);
        }
    }while(opc!=14);
    salida.close();
    entrada.close();
    system("pause");
    return 0;
}