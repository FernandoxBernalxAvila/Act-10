#include <iostream>
#include <string>

#include "laboratorio.h"

using namespace std;

int main() {
    Computadora c01;
    c01.setSistemaOp("Windows 10");
    c01.setProcesador("Intel i9 - 10na");
    c01.setAlmacenamiento(2000);
    c01.setMemoriaRam(32);

    Laboratorio lab;
    //lab.agregarComputadora(c01);


    //cout << c01;
    //Computadora c02;
    //cin >> c02;

    //lab.agregarComputadora(c02);
    lab << c01; //Lo mismo pero en menos lineas anteriores.

    Computadora c03;

    cin >> c03;
    lab << c03;

    lab.mostrar();

/*
    cout<<c01.getSistemaOp()<<endl;
    cout<<c01.getProcesador()<<endl;
    cout<<c01.getAlmacenamiento()<<endl;
    cout<<c01.getMemoriaRam()<<endl;
*/
    return 0;
}
