#include <iostream>
#include <cstdlib>
#include <string.h>
#include "CNodo.h"
#include "CLista.h"
#include "CIterador.h"
#include "CNodo.cpp"
#include "CLista.cpp"
#include "CIterador.cpp"
#include "CClase.cpp"
#include "CClase.h"

using namespace std;

int main(){
    CLista *obj=new CLista();
    CIterador it;
    //int cont=0;
    cout<<"\tHERENCIA\n"<<endl;
    CObjeto* A=new CObjeto();
    CPersona B;
    B.Setnombre("Osvaldo");
    A=&B;
    A->imprimir();
    obj->InsertarAlFinal(A);
    CMaestro C;
    C.Setnombre("Dario");
    C.SetCedula("123456");
    A=&C;
    A->imprimir();
    obj->InsertarAlInicio(A);
    CAlumno D;
    D.Setnombre("Farfan");
    D.SetCodigo("214796622");
    A=&D;
    A->imprimir();
    obj->InsertarAlInicio(A);
    CAuto E;
    E.SetColor("Negro",4);
    A=&E;
    A->imprimir();
    obj->InsertarAlInicio(A);
    CPatrulla F;
    F.SetColor("Blanca/Azul",6);
    F.Setsirena(1);
    A=&F;
    A->imprimir();
    obj->InsertarAlFinal(A);
    CBindado G;
    G.SetColor("Negro",3);
    G.Setsirena(1);
    G.SetBlindaje(20);
    A=&G;
    A->imprimir();
    obj->InsertarAlFinal(A);
    CTaxi H;
    H.SetColor("Blanco/Verde",2);
    H.SetTaximetro(0);
    A=&H;
    A->imprimir();
    obj->InsertarAlInicio(A);
    CAutoparte I;
    I.Setnum(4);
    A=&I;
    A->imprimir();
    obj->InsertarAlFinal(A);
    CMotor J;
    J.Setnum(8);
    J.SetCilindraje(8);
    A=&J;
    A->imprimir();
    obj->InsertarAlFinal(A);
    CLlanta K;
    K.Setnum(14);
    K.SetTamano(20);
    E.SetColor("PLata",6);
    A=&E;
    A->imprimir();
    obj->InsertarAlFinal(A);
    B.Setnombre("Pedro");
    A=&B;
    A->imprimir();
    obj->InsertarAlInicio(A);
    
    cout<<"LISTA"<<endl;
    CObjeto* Aux=new CObjeto();
    for(it=(obj->Begin());it!=(obj->End());++(it)){
        Aux=*(it);
        Aux->imprimirobj();
    }
    system("pause");
    obj->~CLista();
}
