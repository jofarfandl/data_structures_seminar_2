#include <iostream>
#include <cstdlib>
#include "CHash.h"
#include "CArbol.h"
#include <string.h>
#include <fstream>
using namespace std;

#define CLSID_HASH 1000;

CHash::CHash(){
    struct nodo* root = NULL;
    for(int i= 0;i<=17;i++){
        array[i]=root;
    }
}

void CHash::insert(int index,CCiudad * value){
    array[index]=insertar(array[index],value);
}

bool CHash::Buscar(int index,CCiudad * value){
    if(buscar(array[index],value)==true){
        return true;
    }else{
        return false;
    }
}

CCiudad* CHash::locate(int index,CCiudad * value){
    CCiudad *C;
    C=encontrar(array[index],value);
    return C;
}

void CHash::Eliminar(int index,CCiudad * value){
    array[index]=eliminarNodo(array[index],value);
}

void CHash::ver(){
    for(int i=0;i<=17;i++){
        cout << "\t" << i << endl;
        cout << "*****************" << endl;
        Imprimir(array[i],0);
        cout << "*****************" << endl;
    }
}
//*********************************************
int CHash::FunDispersion(CCiudad* value){
    string auxs;
    int index;
    auxs=value->GetNombre();
    index = ( (auxs[0]+auxs[1]+auxs[2]+auxs[3]) % 17);
    return index;
}
//**********************************************
void CHash::Salvar(fstream& out){
    out<<GetCLSID()<<endl;
    out<<tamanio<<endl;
    for(int i=0;i<17;i++){
        Salva(array[i],out);
        cout<<endl;
    }
}

int CHash::GetCLSID(){
    return CLSID_HASH;
}

void CHash::Cargar(fstream& in){
    int tam=0;
    in>>tam;
    for(int i=0;i<tam;i++){
        int CLSID=0;
        in>>CLSID;
        CCiudad* obj=0;
        struct nodo* array[17];
        struct nodo* root;
        switch(CLSID){
            case CLSID_CCiudad:
                obj=new CCiudad;
                break;
            //case CLSID_ARBOL:
            case 666:
                root = NULL;
                break;
            default:
                obj=0;
                break;
        }Carga(root,in);
        array[i]=root;
    }
}