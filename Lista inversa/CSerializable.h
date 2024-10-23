#include <iostream>
#include <fstream>
#include <string.h>
#ifndef CSERIALIZABLE_CSERIALIZABLE_H
#define CSERIALIZABLE_CSERIALIZABLE_H
using namespace std;

class CSerializable{
    
    virtual void Salvar(fstream& out) = 0;
    virtual void Cargar(fstream& in) = 0;
    virtual int GetCLSID()=0;
};

#endif // CSERIALIZABLE_CSERIALIZABLE_H