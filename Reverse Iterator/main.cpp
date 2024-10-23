#include <iostream>
#include <cstdlib>
#include <string.h>
#include "CNodo.h"
#include "CLista.h"
#include "CReverseIterador.h"
#include "CNodo.cpp"
#include "CLista.cpp"
#include "CReverseIterador.cpp"

using namespace std;

int main(){
    CLista *l=new CLista();
    ///CIterador it;
    CReverseIterador it;
    cout<<"\tLISTA DOBLEMENETE ENLAZADA CON ITERADORES\n"<<endl;
    l->InsertarAlInicio(0);
    l->InsertarAlInicio(2);
    l->InsertarAlInicio(3);
    l->InsertarAlInicio(4);
    l->InsertarAlInicio(5);
    l->InsertarAlInicio(6);

    cout<<"LISTA"<<endl;
    for(it=(l->rEnd());it!=(l->rBegin());++(it)){
        cout<<*(it)<<" ";
    }
    cout<<"\n\nSustituir el 0 por 1"<<endl;
    for(it=(l->rEnd());it!=(l->rBegin());++(it)){
        if(*(it)==0)
            *(it)=1;
    }
    for(it=(l->rEnd());it!=(l->rBegin());++(it)){
        cout<<*(it)<<" ";
    }

    cout<<"\n\nContar cantidad de 2 en la lista"<<endl;
    int cont=0;
    for(it=(l->rEnd());it!=(l->rBegin());++(it)){
        if(*(it)==2){
            cont=cont+1;}
    }cout<<"Existen: "<<cont<<endl;

    cout<<"\n\nDuplicar los 2"<<endl;

    for(it=(l->rEnd());it!=(l->rBegin());++(it)){
        if(*(it)==2){
            it.Insertar_Adelante(2);
        }
    }

    for(it=(l->rEnd());it!=(l->rBegin());++(it)){
        cout<<*(it)<<" ";
    }
    cout<<""<<endl;

    cout<<"\n\nEliminar el 5"<<endl;
    for(it=(l->rEnd());it!=(l->rBegin());++(it)){
        if(*(it)==5){
            it.Eliminar_Adelante();
        }
    }
    for(it=(l->rEnd());it!=(l->rBegin());++(it)){
        cout<<*(it)<<" ";
    }

    l->~CLista();
}
