#include <iostream>
#include "CLista.h"
#include "CSerializable.h"

using namespace std;

CLista::CLista(){
    Inicio.pSig=&Final;
    Final.pAnt=&Inicio;
}

CLista::~CLista(){
    CNodo *P=Inicio.pSig;
    while(P!=&Final){
        P=P->pSig;
        delete P->pAnt;
    }
    Inicio.pSig=&Final;
    Final.pAnt=&Inicio;
}

void CLista::InsertarAlInicio(CObjeto* VI, CObjeto* nd){
    Inicio.InsertarAdelante(VI,nd);
}

void CLista::InsertarAlFinal(CObjeto* VI,CObjeto* nd){
    Final.pAnt->InsertarAdelante(VI,nd);
}

void CLista::EliminarAlFinal(){
    Final.pAnt->pAnt->EliminarAdelante();
}

void CLista::EliminarAlInicio(){
    Inicio.EliminarAdelante();
}

int CLista::Size(){
    int nodos = 0;
    CNodo *P = Inicio.pSig;
    while(P != &Final){
        nodos++;
        P=P->pSig;
    }return nodos;
}

bool CLista::IsEmpty(){
    return Inicio.pSig == &Final;
}
bool CLista::IsFull(){
    return Inicio.pSig != &Final;

}


CIterador& CLista::Begin(){
	m_itBegin.pActual=Inicio.pSig;
	return m_itBegin;
}

CIterador& CLista::End(){
	m_itEnd.pActual=&Final;
	return m_itEnd;
}


void CLista :: Salvar(fstream& out){
    out << GetCLSID() << endl;
    out << Size() << endl;
    CIterador it;
    for(it=this->Begin();it!=this->End();++(it)){
        it.pActual->ValorI->Salvar(out);
        it.pActual->dato->Salvar(out);  
        cout<<endl;
    }
};

void CLista :: Cargar(fstream& in){
    CNodo *P=Inicio.pSig;
    int tamanio = 0;
    in >> tamanio;
    for(int i=0 ; i<tamanio; i++){
        int CLSID=0;
        in >> CLSID;
        CObjeto* pObj=0;
        switch(CLSID){
            case CLSID_LIST:
                pObj=new CLista2;
                break;
            case CLSID_CCiudad:
                pObj=new CCiudad;
                break;
            case CLSID_ARISTA:
                pObj=new CArista;
            break; 
            default:
                pObj=0;
            break;
        }
        pObj->Cargar(in);
        CLSID=0;
        in>>CLSID;
        CObjeto *pObj2=0;
        switch (CLSID){
        case CLSID_LIST:
            pObj2=new CLista2;
            break;
        case CLSID_CCiudad:
            pObj2=new CCiudad;
            break;
        case CLSID_ARISTA:
            pObj2=new CArista;
            break;
        default:
            pObj2=0;
            break;
        }
        pObj2->Cargar(in);
        InsertarAlFinal(pObj,pObj2);
    }
};
int CLista :: GetCLSID(){
    return CLSID_CLISTA;
}

//**********************************************
//imprime elementos de la lista
void CLista::imprimir(){
    CNodo *P=Inicio.pSig;
    cout<<endl;
    while(P!=&Final){
        CObjeto *A=new CObjeto();
        A=P->ValorI;
        A->imprimir();
        //imprime objeto(lista)
        A=P->dato;
        A->imprimir();
        P=P->pSig;
    }cout<<"------"<<endl;
}
//imprime todas las ciudades
void CLista::imprimir2(){
    CNodo *P=Inicio.pSig;
    cout<<"------"<<endl;
    while(P!=&Final){
        CObjeto *Aux=new CObjeto();
        Aux=P->ValorI;
        Aux->imprimir();
        P=P->pSig;
        cout<<"------"<<endl;
    }//cout<<"------"<<endl;
}
//imprime lista de una ciudad
void CLista::imprimir3(string ciudad){
    CIterador it;
    string aux;
    for(it=this->Begin();it!=this->End();++(it)){
        aux=it.pActual->ValorI->GetNombre();
        if(ciudad==aux){
            it.pActual->dato->imprimir();
        }
    }
}


bool CLista::verificar(string e,CObjeto* A){
    CIterador it;
    string aux;
    for(it=this->Begin();it!=this->End();++(it)){
        aux=it.pActual->ValorI->GetNombre();
        if(e==aux){
            it.pActual->dato->Insertar(A);
            return true;
        }
    }return false;
}


CObjeto* CLista::verificar2(string e,float dis,string dif){
    CIterador it;
    CObjeto *aux;
    CArista *B;
    string c;
    float ID=0,Precio=0,PIB=0,Atracciones=0;
    for(it=this->Begin();it!=this->End();++(it)){
        c=it.pActual->ValorI->GetNombre();
        if(e==c){
            ID=it.pActual->ValorI->GetID();
            Precio=it.pActual->ValorI->GetPrecio();
            PIB=it.pActual->ValorI->GetPIB();
            Atracciones=it.pActual->ValorI->GetAtracciones();
            B=new CArista;
            B->SetCiudad(c,ID,Precio,PIB,Atracciones,dif,dis);
            aux=B;
            return aux;
        }
    }
}

void CLista2::Insertar(CObjeto* nd){
    F.ant->InsertarAdelante(nd);
}

int CLista2::Size(){
    int Inodos=0;
    CNodo2 *P=I.sig;
    while(P!=&F){
        Inodos++;
        P=P->sig;
    }return Inodos;
}

void CLista2::imprimir(){
    CNodo2 *P=I.sig;
    while(P!=&F){
        CObjeto *Aux=new CObjeto();
        Aux=P->arista;
        Aux->imprimir();
        P=P->sig;
    }cout<<endl;
}

void CLista2::Salvar(fstream& out){
    out<<GetCLSID()<<endl;;
    out<<Size()<<endl;
    CIterador2 it;
    for(it=this->Begin();it!=this->End();++(it)){
        it.pActual->arista->Salvar(out);
        cout<<endl;
    }
}
void CLista2::Cargar(fstream& in){
    int tam=0;
    in>>tam;
    for(int i=0;i<tam;i++){
        int CLSID=0;
        in>>CLSID;
        CObjeto *obj=0;
        switch (CLSID){
        case CLSID_CCiudad:
            obj=new CCiudad;
            break;
        default:
            obj=0;
            break;
        }obj->Cargar(in);
        Insertar(obj);
    }
}
int CLista2::GetCLSID(){
    return CLSID_LIST;
}

CLista2::CLista2(){
    I.sig=&F;
    F.ant=&I;
}

CLista2::~CLista2(){
    CNodo2 *P=I.sig;
    while(P!=&F){
        P=P->sig;
        delete P->ant;
    }
    I.sig=&F;
    F.ant=&I;
}

CIterador2& CLista2::Begin(){
	m_Begin.pActual=I.sig;
	return m_Begin;
}
CIterador2& CLista2::End(){
	m_End.pActual=&F;
	return m_End;
}

