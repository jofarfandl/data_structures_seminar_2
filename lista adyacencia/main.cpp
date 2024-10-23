#include <iostream>
#include <cstdlib>
#include <string.h>
#include <cstring>
#include <windows.h>
#include <fstream>
#include "CNodo.h"
#include "CNodo.cpp"
#include "CLista.h"
#include "CLista.cpp"
#include "CIterador.h"
#include "CIterador.cpp"
#include "CClase.h"
#include "CClase.cpp"


using namespace std;

void menu();

int main(){
    float arreglo[20][20];
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            arreglo[i][j]=0;
        }
    }
    CCiudad **ciudades=new CCiudad*[20];

    CLista *lista=new CLista();
    CLista *lista2=new CLista();
    CLista2 *list=new CLista2();
    CIterador it;
    int CLSID=0;

    int cont=0, opc, opc2, distancia;
    float Precio, Distancia, PIB, Atracciones;
    string Nombre,Ciudad;

    CCiudad *C1;
    CArista* A1;
    CObjeto* obj = 0;
    string nombre,ciudad,auxc,Dificultad,ciudad1,ciudad2;
    fstream salida("Datos.txt",ios_base::out);
    fstream entrada("Datos.txt",ios_base::in);

    C1=new CCiudad;
    C1->SetCiudad("Dublin",cont+1,2029,60000000,4);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][2]=arreglo[2][cont]=961;
    cont++;
    list=new CLista2;
    lista->InsertarAlFinal(obj,list);


    C1=new CCiudad;
    C1->SetCiudad("Amsterdam",cont+1,2233,595540,5);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][3]=arreglo[3][cont]=656;
    cont++;
    list=new CLista2;
    lista->InsertarAlFinal(obj,list);

    C1=new CCiudad;
    C1->SetCiudad("Sevilla",cont+1,1217,38215048,2);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][2]=arreglo[2][cont]=2330;
    cont++;
    list=new CLista2;
    lista->InsertarAlFinal(obj,list);

    C1=new CCiudad;
    C1->SetCiudad("Berlin",cont+1,1459,153291000,3);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][7]=arreglo[7][cont]=2582;
    cont++;
    list=new CLista2;
    lista->InsertarAlFinal(obj,list);

    C1=new CCiudad;
    C1->SetCiudad("Atenas",cont+1,2337,165830000,3);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][4]=arreglo[4][cont]=3659;
    cont++;
    list=new CLista2;
    lista->InsertarAlFinal(obj,list);
    
    C1=new CCiudad;
    C1->SetCiudad("Estambul",cont+1,1001,348721000,5);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][7]=arreglo[7][cont]=4762;
    cont++;
    list=new CLista2;
    lista->InsertarAlFinal(obj,list);

    C1=new CCiudad;
    C1->SetCiudad("Tromso",cont+1,2969,32159000,4);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][7]=arreglo[7][cont]=2582;
    cont++;
    list=new CLista2;
    lista->InsertarAlFinal(obj,list);

    C1=new CCiudad;
    C1->SetCiudad("Moscu",cont+1,1750,1288690,6);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][3]=arreglo[3][cont]=1813;
    cont++;
    list=new CLista2;
    lista->InsertarAlFinal(obj,list);

    C1=new CCiudad;
    C1->SetCiudad("Hong_kong",cont+1,1817,36570000,4);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][9]=arreglo[9][cont]=2884;
    cont++;
    list=new CLista2;
    lista->InsertarAlFinal(obj,list);

    C1=new CCiudad;
    C1->SetCiudad("Tokio",cont+1,4800,1617000,5);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][9]=arreglo[9][cont]=2884;
    cont++;
    list=new CLista2;
    lista->InsertarAlFinal(obj,list);

    C1=new CCiudad;
    C1->SetCiudad("Monterrey",cont+1,900,128896000,4);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][15]=arreglo[15][cont]=1130;
    cont++;
    list=new CLista2;
    lista->InsertarAlFinal(obj,list);

    C1=new CCiudad;
    C1->SetCiudad("San_Francisco",cont+1,2400,150004000,4);
    obj=C1;
    ciudades[cont]=C1;
    cont++;
    list=new CLista2;
    lista->InsertarAlFinal(obj,list);

    C1=new CCiudad;
    C1->SetCiudad("Toronto",cont+1,2000,24000000,3);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][9]=arreglo[9][cont]=7480;
    cont++;
    list=new CLista2;
    lista->InsertarAlFinal(obj,list);

    C1=new CCiudad;
    C1->SetCiudad("Cairo",cont+1,1350,316798000,2);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][4]=arreglo[4][cont]=3659;
    cont++;
    list=new CLista2;
    lista->InsertarAlFinal(obj,list);

    C1=new CCiudad;
    C1->SetCiudad("Madrid",cont+1,1700,215397000,4);
    obj=C1;
    ciudades[cont]=C1;
    arreglo[cont][2]=arreglo[2][cont]=2330;
    cont++;
    list=new CLista2;
    lista->InsertarAlFinal(obj,list);


    do{
        system("cls");
        int i=0,j=0;
        CObjeto* obj2 = 0;
        menu();
        cin>>opc;
        switch(opc){
            case 1://Agregar una Ciudad
            system("cls");
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
                obj=C1;
                ciudades[cont]=C1;
                cont++;
                list=new CLista2;
                lista->InsertarAlFinal(obj,obj2);
            break;
            case 2://Agregar una coneccion de vertices
                CObjeto *aux;
                cout<<"Ciudad 1: ";
                cin>>ciudad1;
                cout<<"Ciudad 2: ";
                cin>>ciudad2;
                cout<<"Distancia"<<endl;
                cin>>Distancia;
                cout<<"Dificultad"<<endl;
                cin>>Dificultad;
                aux=lista->verificar2(ciudad2,Distancia,Dificultad);
                lista->verificar(ciudad1,aux);
                aux=lista->verificar2(ciudad1,Distancia,Dificultad);
                lista->verificar(ciudad2,aux);
            break;
            case 3://Mostrar matriz
                for(int i=0;i<cont;i++){
                    for(int j=0;j<cont;j++){
                        cout<<arreglo[i][j]<<" ";
                    }cout<<endl;
                }
                system("pause");
            break;
            case 4://imprimir lista FALLA TRUENA EL CODIGO
                lista->imprimir();
                system("pause");
                break;
            case 5://imprimir lista de una ciudad
                cout<<"Ingrese la ciudad a ver su lista: ";
                cin>>ciudad1;
                lista->imprimir3(ciudad1);
                system("pause");
                break;
            case 6://imprimir ciudades
                lista->imprimir2();
                system("pause");
                break;
            case 7:
                cout<<"Ingrese la primer ciudad a conectar: ";
                cin>>ciudad;
                for(i=0;i<cont;i++){
                    auxc=ciudades[i]->GetNombre();
                    if(auxc==ciudad){
                        break;
                    }
                }
                cout<<"Ingrese la segunda ciudad a conectar: ";
                cin>>ciudad;
                for(j=0;j<cont;j++){
                    auxc=ciudades[j]->GetNombre();
                    if(auxc==ciudad){
                    break;
                    }
                }
                cout<<"Ingrese la distancia: ";
                cin>>distancia;
                arreglo[i][j]=distancia;
                arreglo[j][i]=distancia;
            break;
            case 8://Imprimir ciudades
                for(int i=0;i<cont;i++){
                    ciudades[i]->imprimir();
                }
                system("pause");
            break;
            case 9://Imprimir conecciones
                for(int i=0;i<cont;i++){
                    
                    cout<<"\tPartida:"<<endl;
                    //ciudades[i]->imprimir();
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
            case 10:
                lista->Salvar(salida);
                cont=1;
                break;
            case 11:
                CLSID=0;
                entrada>>CLSID;
                lista2->Cargar(entrada);
                lista2->imprimir();
                system("pause");
                break;
            case 0:
                cout<<"Fin del Programa..."<<endl;
                exit(0);
        }
    }while(opc!=0);
    salida.close();
    entrada.close();
    system("pause");
    return 0;
}

void menu(){
    system("cls");
    cout << "\tMENU:" << endl;
    cout << "1.-Agregar una Ciudad" << endl;
    cout << "2.-Agregar una coneccion de ciudades" << endl;
    cout << "3.-Imprimir Matriz" << endl;
    cout << "4.-Imprimir lista" << endl;
    cout << "5.-Imprimir lista de una ciudad" << endl;
    cout << "6.-Imprimir Ciudades" << endl;
    cout << "7.-Conecciones" << endl;
    cout << "8.-Imprimir Ciudades" << endl;
    cout << "9.-Imprimir Conecciones" << endl;
    cout << "10.-Salvar" << endl;
    cout << "11.-Cargar" << endl;
    cout << "0.-SALIR" << endl;
    cout << "Ingrese una opcion valida: " << endl;
}
