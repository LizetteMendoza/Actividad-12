#include<iostream>
#include"arreglo.h"

using namespace std;


int main(){

    ArregloDinamico arreglo;

    arreglo.insertar_final("perro");
    arreglo.insertar_final("gato");
    arreglo.insertar_final("raton");
    arreglo.insertar_final("oso");
    arreglo.insertar_final("pez");
    arreglo.insertar_final("leon");
    arreglo.insertar_final("tigre");
    arreglo.insertar_final("conejo");
    arreglo.insertar_inicio("rana");
    arreglo.insertar_inicio("luciernaga");


    cout<<endl;
    for (size_t i = 0; i < arreglo.size(); i++)
    {
        cout<<arreglo[i]<<" ";
    }
    
    return 0;
}