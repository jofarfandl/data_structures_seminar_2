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
    cout<<"HERENCIA\n"<<endl;
    CObjeto* ObjA=new CObjeto();
    CPersona ObjB;
    ObjB.Setnombre("Osvaldo");
    ObjA=&ObjB;
    ObjA->imprimir();
    obj->InsertarAlFinal(ObjA);

    CAlumno C;
    C.Setnombre("Farfan");
    C.SetCodigo("214796622");
    ObjA=&C;
    ObjA->imprimir();
    obj->InsertarAlInicio(ObjA);

    CMaestro ObjD;
    ObjD.Setnombre("Dario");
    ObjD.SetCedula("123456");
    ObjA=&ObjD;
    ObjA->imprimir();
    obj->InsertarAlInicio(ObjA);



    CAuto ObjE;
    ObjE.SetColor("Negro",4);
    ObjA=&ObjE;
    ObjA->imprimir();
    obj->InsertarAlInicio(ObjA);

    CPatrulla ObjF;
    ObjF.SetColor("Blanca/Azul",6);
    ObjF.Setsirena(1);
    ObjA=&ObjF;
    ObjA->imprimir();
    obj->InsertarAlFinal(ObjA);

    CBindado ObjG;
    ObjG.SetColor("Negro",3);
    ObjG.Setsirena(1);
    ObjG.SetBlindaje(20);
    ObjA=&ObjG;
    ObjA->imprimir();
    obj->InsertarAlFinal(ObjA);

    CTaxi ObjH;
    ObjH.SetColor("Blanco/Verde",2);
    ObjH.SetTaximetro(0);
    ObjA=&ObjH;
    ObjA->imprimir();
    obj->InsertarAlInicio(ObjA);

    CAutoparte ObjI;
    ObjI.Setnum(4);
    ObjA=&ObjI;
    ObjA->imprimir();
    obj->InsertarAlFinal(ObjA);

    CMotor ObjJ;
    ObjJ.Setnum(8);
    ObjJ.SetCilindraje(8);
    ObjA=&ObjJ;
    ObjA->imprimir();
    obj->InsertarAlFinal(ObjA);

    CLlanta ObjK;
    ObjK.Setnum(14);
    ObjK.SetTamano(20);
    ObjE.SetColor("PLata",6);
    ObjA=&ObjE;
    ObjA->imprimir();
    obj->InsertarAlFinal(ObjA);

    ObjB.Setnombre("Pedro");
    ObjA=&ObjB;
    ObjA->imprimir();
    obj->InsertarAlInicio(ObjA);

    cout<<"Constructores"<<endl;
    CObjeto* Aux=new CObjeto();
    for(it=(obj->Begin());it!=(obj->End());++(it)){
        Aux=*(it);
        Aux->imprimirobj();
    }
    cout<<"\nDestructores"<<endl;
    obj->~CLista();
}
