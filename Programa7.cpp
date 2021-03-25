#include <iostream>
#include <conio.h>
using namespace std;

//Clase Base vehic_carret
class vehic_carret{
    int ruedas;
    int pasajeros;

    public:
    void esc_ruedas(int num);
    int preg_ruedas(void);
    void esc_pas(int num);
    int preg_pas(void);
};

//Clase camion, clase derivada de carret
/*class camion : public vehic_carret{
    int carga;
    //public: QUITANDO EL PUBLIC DE LA CLASE DERIVADA CAMION
    void esc_carga(int size);    
    int preg_carga(void);
    void mostrar(void);
};*/

enum tipo{coche, furgoneta, ranchera};

//Clase automovil, clase derivada de carret
class automovil : public vehic_carret{
    enum tipo tipo_coche;
    public:
    void esc_tipo(enum tipo t);
    enum tipo preg_tipo(void);
    void mostrar(void);
};

//Funciones de esc_ruedas de la clase base carret
void vehic_carret::esc_ruedas(int num){
    ruedas = num;
}

//Funcion de preg_ruedas de la clase base
int vehic_carret::preg_ruedas(void){
    return ruedas;
}

//Funcion para esc_pass
void vehic_carret::esc_pas(int num){
    pasajeros = num;
}

//funcion para preg_pass
int vehic_carret::preg_pas(void){
    return pasajeros;
}

//Funcion para esc_carga clase camion
/*void camion::esc_carga(int num){
    carga = num;
}*/

//Funcion para preg_carga clase camion
/*int camion::preg_carga(void){
    return carga;
}*/

//Funcion mostrar de clase camion
/*void camion::mostrar(void){
    cout<<"Ruedas: "<<preg_ruedas()<<endl;
    cout<<"Pasajeros: "<<preg_pas()<<endl;
    cout<<"capacidad de carga en metros cubicos: "<<carga<<endl;
}*/

//Funcion para esc_tipo de la clase automovil
void automovil::esc_tipo(enum tipo t){
    tipo_coche = t;
}

//Funcion preg_tipo de la clase automovil
enum tipo automovil::preg_tipo(void){
    return tipo_coche;
}

//Funcion mostrar de la clase automovil
void automovil::mostrar(void){
    cout<<"Ruedas: "<<preg_ruedas()<<endl;
    cout<<"Pasajeros: "<<preg_pas()<<endl;
    cout<<"Tipo: ";
    switch(preg_tipo()){
        case furgoneta: 
            cout<<"Furgoneta"<<endl;
            break;
        case coche:
            cout<<"Coche"<<endl;
            break;
        case ranchera:
            cout<<"Ranchera"<<endl;
            break;
    }
}

int main(){
    /*camion t1, t2;*/
    automovil c;

    /*t1.esc_ruedas(18);              //Clase base
    t1.esc_pas(2);                  //Clase base
    t1.esc_carga(32);               //Clase derivada camion

    t2.esc_ruedas(6);               //Clase base
    t2.esc_pas(3);                  //Clase base
    t2.esc_carga(12);               //Clase derivada camion

    t1.mostrar();                   //Clase camion
    t2.mostrar();                   //Clase camion*/

    c.esc_ruedas(4);                //Clase automovil
    c.esc_pas(6);                   //Clase automovil
    c.esc_tipo(furgoneta);          //Clase automovil

    c.mostrar();                    //Clase automovil

    getch();
    return 0;
}

