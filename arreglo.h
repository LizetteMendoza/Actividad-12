#ifndef ARREGLO_H
#define ARREGLO_H

#include<iostream>

using namespace std;

class Arreglo{
 
 private:
    string *arreglo;
    size_t tam;
    size_t cont;
    const static size_t MAX=5;
    void expandir();

 public:
    Arreglo();
    ~Arreglo();
    void insertar_inicio(string v);
    void insertar_final(string v);
    size_t size();
    string operator [] (size_t p){
        return arreglo[p];
    }
    
};

#endif