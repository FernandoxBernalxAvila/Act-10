#ifndef LABORATORIO_H_INCLUDED
#define LABORATORIO_H_INCLUDED

#include "computadora.h"

class Laboratorio{

    Computadora arreglo [5];
    size_t contador;
public:
    Laboratorio();

    void agregarComputadora(const Computadora &c);
    void mostrar();

    friend Laboratorio& operator<<(Laboratorio &v, const Computadora &c){

    v.agregarComputadora(c);

    return v;

    }
};

#endif // LABORATORIO_H_INCLUDED
