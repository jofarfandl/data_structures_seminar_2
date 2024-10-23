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

void CLista::InsertarAlInicio(float VI, CObjeto* nd){
    Inicio.InsertarAdelante(VI,nd);
}

void CLista::InsertarAlFinal(float VI,CObjeto* nd){
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

void CLista::imprimir(){
    CNodo *P = Inicio.pSig;
    system("cls");
    cout << endl;
    while(P != &Final){
        CObjeto* A=new CObjeto();
        A=P->dato;
        cout<<"-------------------"<<endl;
        cout << "\t" << P->ValorI << endl;
        cout<<"-------------------"<<endl;
        A->imprimir();
        P=P->pSig;
    }
    
}

CIterador& CLista::Begin(){
	m_itBegin.pActual=Inicio.pSig;
	return m_itBegin;
}

CIterador& CLista::End(){
	m_itEnd.pActual=&Final;
	return m_itEnd;
}


bool CLista::verificar(float ValorI,CObjeto* A){
    CIterador it;
    float aux=0;
    for(it=this->Begin();it!=this->End();++(it)){
        aux=it.pActual->ValorI;
        if(ValorI==aux){
            it.pActual->dato->Insertar(A);
            return true;
        }
    }return false;
}

void CLista :: Salvar(fstream& out){
    out << GetCLSID() << endl;
    out << Size() << endl;
    CIterador it;
    for(it=this->Begin();it!=this->End();++(it)){
        out << it.pActual->ValorI << endl;
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
        in>>P->ValorI;
        in >> CLSID;
        CObjeto* pObj=0;
        switch(CLSID){
            case CLSID_LIST:
                pObj=new CLista2;
                break;
            case CLSID_CPERSONA:
                pObj=new CPersona;
                break;
            default:
                pObj=0;
                break;
        }
        pObj->Cargar(in);
        InsertarAlFinal(P->ValorI,pObj);
    }
};
int CLista :: GetCLSID(){
    return CLSID_CLISTA;
}

//*************************************
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
        Aux=P->valor;
        Aux->imprimir();
        P=P->sig;
    }cout<<endl;
}

void CLista2::Salvar(fstream& out){
    out<<GetCLSID()<<endl;;
    out<<Size()<<endl;
    CIterador2 it;
    for(it=this->Begin();it!=this->End();++(it)){
        it.pActual->valor->Salvar(out);
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
        case CLSID_CPERSONA:
            obj=new CPersona;
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
