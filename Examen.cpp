#include <iostream> 
#include <math.h>

using namespace std;

class obj_geom
{
	public:
		obj_geom(float x=0, float y=0) : xC(x) , yC(y) 
		{   }
		
	    void imprimecentro() const 
		{
			cout<< xC << " " << yC << "\n";	
		}	
			
	protected:
	 float xC, yC;	
};

const float pi = 3.14159265;

class circulo : public obj_geom
{
	public:
		circulo( float x_C, float y_C , float r) : obj_geom(x_C, y_C)
		{
			radio = r;
		}
		float area() const 
		{
			return pi * radio * radio;
		 } 
		 float perimetro () const
		 {
		 	return pi * 2 * radio;
		 }
		private: 
			float radio;
 };
 
 class cuadrado : public obj_geom
  {
  	public:
  		cuadrado (float x_C, float y_C, float x, float y) : obj_geom(x_C, y_C)
 		{
 			x1 = x;
 			y1 = y;
		 }
		float area() const
		{
			float a,b; 
			a = x1 - xC;
			b = y1 - yC;
			return 2 * (a * a + b * b);
		} 
		float perimetro () const
		{
			return 4 * (x1-xC);
		}
	private :
		 	float x1, y1;
 };

 //Clase triangulo rectangulo
 class triangulo : public obj_geom{
     public:
        triangulo (float x_C, float y_C, float b, float h) : obj_geom(x_C, y_C){
            base = b;
            altura = h;
            hipotenusa = sqrt(b*b+h*h);
        }
        float area() const{
            return base * altura / 2;
        }
        float perimetro() const{
            return base + altura + hipotenusa;
        }
        private:
        float base, altura, hipotenusa;
 };

int main()
{
	circulo  C(2 , 2.5 , 2 );
	cuadrado cuad(3 , 3.5 , 4.37 , 3.85);
    triangulo tria(4 , 4.5, 3, 4);
	cout <<"centro del circulo     : "; C.imprimecentro();
	cout <<"centro del cuadrado    : "; cuad.imprimecentro();
    cout <<"centro del triangulo   : "; tria.imprimecentro();
	cout <<"area del circulo       : " << C.area() <<"\n";
	cout <<"area del cuadrado      : " << cuad.area() <<"\n";
    cout <<"area del triangulo     : " << tria.area() <<endl;
	cout <<"perimetro del circulo  : " << C.perimetro()<<"\n"; 
	cout <<"perimetro del cuadrado : " << cuad.perimetro()<<"\n";
    cout <<"perimetro del triangulo: " <<tria.perimetro()<<endl;
    
	return 0;
}
             