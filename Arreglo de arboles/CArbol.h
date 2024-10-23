#include <iostream>
#include <string.h>
#include <fstream>
#include <cstdlib>
#include "CClase.h"
#ifndef CARBOL_H_INCLUDED
#define CARBOL_H_INCLUDED

using namespace std;

#define CLSID_ARBOL 666;

struct nodo{
    CCiudad *key;
    struct nodo *left, *right;
};
#endif // CNODO_H_INCLUDED