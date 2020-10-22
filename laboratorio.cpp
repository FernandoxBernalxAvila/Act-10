#include "laboratorio.h"

Laboratorio::Laboratorio(){
    contador = 0;
}

void Laboratorio::agregarComputadora(const Computadora &c){

    if (contador < 5){
        arreglo[contador] = c;
        contador++;
    }
    else{
        cout<<"El arreglo se encuentra lleno."<<endl;
    }
}

void Laboratorio::mostrar(){

    cout << left;
    cout << setw(15) << "Sistema OP";
    cout << setw(20) << "Procesador";
    cout << setw(17) << "Almacenamiento";
    cout << setw(15) << "Memoria RAM";
    cout << endl;

    for (size_t i = 0; i < contador; i++){
            Computadora &c = arreglo[i];

            cout << c;

            //cout<<"Sistema Operativo:   "<<c.getSistemaOp()<<endl;
            //cout<<"Procesador:          "<<c.getProcesador()<<endl;
            //cout<<"Almacenamiento:      "<<c.getAlmacenamiento()<<endl;
            //cout<<"Memoria RAM:         "<<c.getMemoriaRam()<<endl;
            //cout<<endl;
    }

}
