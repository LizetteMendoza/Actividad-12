#include"arreglo.h"

Arreglo::Arreglo(){
    arreglo = new string[MAX];
    cont = 0;
    tam = MAX;
}

Arreglo::~Arreglo(){

    delete[] arreglo;
}

void Arreglo::insertar_final(string v){
    
    if(cont == tam){
        expandir();
    }

    arreglo[cont] = v;
    cont ++;
}

void Arreglo::insertar_inicio(string v){
     if(cont == tam){
        expandir();
    }

    for (size_t i = cont; i > 0; i--){
        arreglo[i]=arreglo[i-1];
    }

    arreglo[0] =v;
    cont ++;
}

void Arreglo::expandir(){
    string *nuevo = new string [tam+MAX];

    for (size_t i = 0; i < cont; i++)
    {
        nuevo[i]= arreglo[i];
    }
    delete[] arreglo;
    arreglo = nuevo;
    tam = tam + MAX;
}

size_t Arreglo::size(){

    return cont;
}





