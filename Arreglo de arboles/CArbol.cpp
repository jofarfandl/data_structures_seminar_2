#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include <cstdlib>
#include "CArbol.h"
#include "CClase.h"
using namespace std;

bool buscar(struct nodo* root, CCiudad* key);
CCiudad* encontrar(struct nodo* root, CCiudad * key);
bool vacia(struct nodo* root);
void anular(nodo* root);
void Imprimir(nodo* root, int dat);
int size(nodo* root,int n,int dat);
void Salva(nodo* root,fstream& out);
void Salva2(nodo* root,fstream& out);
void Carga(nodo* root,fstream& in);
struct nodo* minValueNode(struct nodo* root);

int GetCLSID(){
    return CLSID_ARBOL;
}

struct nodo* newNodo(CCiudad * item){
    struct nodo* temp= (struct nodo*)malloc(sizeof(struct nodo));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct nodo* insertar(struct nodo* nodo, CCiudad* key){
    if (nodo == NULL)
        return newNodo(key);
    if (key < nodo->key)
        nodo->left = insertar(nodo->left, key);
    else
        nodo->right = insertar(nodo->right, key);
    return nodo;
}

struct nodo* eliminar(struct nodo* root, CCiudad * key){
    if (root == NULL)
        return root;
    if (key < root->key)
        root->left = eliminar(root->left, key);
    else if (key > root->key)
        root->right = eliminar(root->right, key);
    else {
        if (root->left == NULL) {
            struct nodo* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct nodo* temp = root->left;
            free(root);
            return temp;
        }

        struct nodo* temp = minValueNode(root->right);
        root->key = temp->key;
        root->right = eliminar(root->right, temp->key);
    }
    return root;
}

struct nodo* minValueNode(struct nodo* root){
    struct nodo* current = root;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

struct nodo* eliminarNodo(struct nodo* root, CCiudad * key){
    if (root == NULL)
        return root;
    if (key < root->key)
        root->left = eliminarNodo(root->left, key);
    else if (key > root->key)
        root->right = eliminarNodo(root->right, key);
    else {
        if (root->left == NULL) {
            struct nodo* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct nodo* temp = root->left;
            free(root);
            return temp;
        }

        struct nodo* temp = minValueNode(root->right);
        root->key = temp->key;
        root->right = eliminarNodo(root->right, temp->key);
    }
    return root;
}

bool buscar(struct nodo* root, CCiudad* key){
    if (root == NULL)
        return false;
    else if (root->key == key)
        return true;
    else if(key<root->key)
        return buscar(root->left,key);
    else
        return buscar(root->right,key);
}

CCiudad* encontrar(struct nodo* root, CCiudad * key){
    if (root == NULL)
        return root->key;
    else if (root->key->GetNombre() == key->GetNombre())
        return root->key;
    else if(key->GetNombre()<root->key->GetNombre())
        buscar(root->left,key);
    else
        buscar(root->right,key);
}



bool vacia(struct nodo* root){
    if (root == NULL){
        return true;
    }
    else{
        return false;
    }
}

void anular(nodo* root){
    if (root == NULL)return;

    anular(root->left);
    anular(root->right);
    cout << "\n Se elimino: " <<root->key;
    delete root;
}


string auxs;
void Imprimir(nodo* root, int dat){
    if(root==NULL)
        return;
    Imprimir(root->right, dat+1);
    for(int i=0; i<dat; i++)
    auxs= root->key->GetNombre();
    cout << "Nombre: " << root->key->GetNombre() << endl;
    cout << "ID: " <<root->key->GetID() << endl;
    cout << "Precio: " <<root->key->GetPrecio() << endl;
    cout << "PIB: " <<root->key->GetPIB() << endl;
    cout << "Atraciones: " <<root->key->GetAtracciones() << endl << endl;
    Imprimir(root->left, dat+1);
}

int size(nodo* root,int n,int dat){
    if(root==NULL)
        return 0;
    n++;
    size(root->right,n,dat+1);
    size(root->left,n,dat+1);
    return n;
}

void Salva2(nodo* root,fstream& out){
    if (root != NULL){
        Salva2(root->left,out);
        root->key->Salvar(out);
        cout<<endl;
        Salva2(root->right,out);
    }else return;
}

void Salva(nodo* root,fstream& out){
    int contador=0,tamanio;
    out<<GetCLSID()<<endl;
    tamanio=size(root,contador,0);
    out<<tamanio<<endl;
    Salva2(root,out);
}



void Carga(nodo* root,fstream& in){
    int tam=0;
    in>>tam;
    for(int i=0;i<tam;i++){
        int CLSID=0;
        in>>CLSID;
        CCiudad* obj=0;
        switch(CLSID){
            case CLSID_CCiudad:
                obj=new CCiudad;
                break;
            default:
                obj=0;
                break;
        }obj->Cargar(in);
        insertar(root,obj);
    }
}