#include <iostream>
#include <conio.h>
using namespace std;

class obj_geom{
    public:
    obj_geom(float x=0, float y=0) : xC(x), yC(y){
    }

    void imprimecentro() const{
        cout<<xC<<" "<<yC<<endl;
    }

    protected:
    float xC, yC;

};

const float pi = 3.14159265;

class circulo : public obj_geom{
    public:
    circulo(float x_C, float y_C, float r) : obj_geom(x_C, y_C){
        radio = r;
    }
    float area() const{
        return pi* radio * radio;
    }
    //Metiendo la funcion de perimetro al circulo
    float perimetro() const{ 
        return 2 * pi * radio;
    }
    private:
        float radio;
};

class cuadrado : public obj_geom{
    public:
    cuadrado(float x_C, float y_C, float x, float y) : obj_geom(x_C, y_C){
        x1 = x;
        y1 = y;
    }
    float area() const{
        float a,b;
        a=x1 - xC; //1.37
        b= y1 - yC; //0.35
        return 2*(a*a+b*b); //1.8769 + 0.1225 = 1.9994 * 2 = 3.9988
    }
    //Metiendo el perimetro
    float perimetro(){
        return x1*y1;
    }

    private:
    float x1, y1;
};

int main(){
    circulo C(2, 2.5, 2);
    cuadrado cuad(3, 3.5, 4.37, 3.85);

    cout<<"Centro del circulo   : "; C.imprimecentro();
    cout<<"Centro de cuadrado   : "; cuad.imprimecentro();
    cout<<"Area del circulo     : "<<C.area()<<endl;
    cout<<"Area del cuadrado    : "<<cuad.area()<<endl;
    cout<<"Perimetro del circulo: "<< C.perimetro()<<endl;
    cout<<"Perimetro del cuadrado: "<<cuad.perimetro()<<endl;

    getch();
    return 0;
}