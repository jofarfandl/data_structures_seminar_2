#include <iostream>
//#include "CNodo.h"
#include "CLista.h"
//#include "CIterador.h"
//#include "CClase.h"
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

void CLista::InsertarAlInicio(CObjeto* nd){
    Inicio.InsertarAdelante(nd);
}

void CLista::InsertarAlFinal(CObjeto* nd){
    Final.pAnt->InsertarAdelante(nd);
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
//-----------------------------------------
void CLista::Imprimir(){
    CNodo *P = Inicio.pSig;
    while(P != &Final){
        CObjeto* A=new CObjeto();
        A=P->dato;
        A->imprimir();
        P=P->pSig;
    }
    cout<<""<<endl;
}

void CLista :: Salvar(fstream& out){
    out << GetCLSID() << endl;
    out << Size() << endl;
    CIterador it;
    for(it=this->Begin();it!=this->End();++(it)){
        it.pActual->dato->Salvar(out);
        cout<<endl;
    }
};

void CLista :: Cargar(fstream& in){
    int tamanio = 0;
    in >> tamanio;
    for(int i=0 ; i<tamanio; i++){
        int CLSID=0;
        in >> CLSID;
        CObjeto* pObj=0;
        switch(CLSID){
            case CLSID_CPERSONA:
                pObj=new CPersona;
                break;
            case CLSID_CALUMNO:
                pObj=new CAlumno;
                break;
            case CLSID_CMAESTRO:
                pObj=new CMaestro;
                break;
            case CLSID_CAUTO:
                pObj=new CAuto;
                break;
            case CLSID_CTAXI:
                pObj=new CTaxi;
                break;
            case CLSID_CPATRULLA:
                pObj=new CPatrulla;
                break;
            case CLSID_CBLINDADO:
                pObj=new CBlindado;
                break;
            case CLSID_CAUTOPARTE:
                pObj=new CAutoparte;
                break;
            case CLSID_CLLANTA:
                pObj=new CLlanta;
                break;
            case CLSID_CMOTOR:
                pObj=new CMotor;
                break;
            default:
                pObj=0;
                break;
        }
        pObj->Cargar(in);
        InsertarAlFinal(pObj);
    }
};
int CLista :: GetCLSID(){
    return CLSID_CLISTA;
}

//----------------------------------------

CIterador& CLista::Begin(){
	m_itBegin.pActual=Inicio.pSig;
	return m_itBegin;
}

CIterador& CLista::End(){
	m_itEnd.pActual=&Final;
	return m_itEnd;
}

