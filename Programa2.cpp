// Demostracion de los operadores de acceso a los miembros de una clase 
//
// en ejemplos posteriores evitemos usar los datos publicos  
#include <iostream>

using namespace std;

class cuenta 
{
	public:	
		
		cuenta() { 	x = 0; suma = 0;};		// constructor
		void imprime() {cout << x <<"\n";}
		int  x, suma;	
};

int main()
{
		cuenta contador,
        *ptrContador = &contador,  		//apuntador hacia el contador 
		&refContador = contador; 		//referencia contador 
       			//crea el objeto contador 
		
		cout<<"Asigna 7 a x y lo imprime utilizando el nombre del objeto :";
		contador.x = 7;					//asigna 7 al dato miembro x
		contador.suma = contador.suma + contador.x;
		contador.imprime();				//llama a la funcion miembro imprime 

		cout <<"Asigna 8 a x y lo imprime utilizando el nombre del objeto :";
		contador.x = 8;					//asigna 7 al dato miembro x
        contador.suma = contador.suma + contador.x;
		contador.imprime();				//llama a la funcion miembro imprime

		cout <<"Asigna 10 a x y lo imprime utilizando el nombre del objeto :";
		contador.x = 10;				//asigna 7 al dato miembro x
        contador.suma = contador.suma + contador.x;
		contador.imprime();				//llama a la funcion miembro imprime  

        cout<<"Asigna 11 a x y lo imprime utilizando el nombre del objeto :"; //1 instancia
        contador.x = 11;
        contador.suma = contador.suma + contador.x;
        contador.imprime();

        cout<<"Asigna 13 a x y lo imprime utilizando el nombre del objeto :"; //2 instancia
        contador.x = 13;
        contador.suma = contador.suma + contador.x;
        contador.imprime();

        cout<<"Asigna 14 a x y lo imprime utilizando el nombre del objeto :"; //3 instancia
        contador.x = 14;
        contador.suma = contador.suma + contador.x;
        contador.imprime();

        cout<<"Asigna 15 a x y lo imprime utilizando el nombre del objeto :"; //4 instancia
        contador.x = 15;
        contador.suma = contador.suma + contador.x;
        contador.imprime();

        cout<<"Asigna 17 a x y lo imprime utilizando el nombre del objeto :"; //5 instancia
        contador.x = 17;
        contador.suma = contador.suma + contador.x;
        contador.imprime();

        cout<<"Asigna 18 a x y lo imprime utilizando el nombre del objeto :"; //6 instancia
        contador.x = 18;
        contador.suma = contador.suma + contador.x;
        contador.imprime();

        cout<<"Asigna 20 a x y lo imprime utilizando el nombre del objeto :"; //7 instancia
        contador.x = 20;
        contador.suma = contador.suma + contador.x;
        contador.imprime();

        cout<<"El promedio es: "; //8 instancia para el promedio
        contador.suma = contador.suma / 10; //promedio
        contador.x = contador.suma; //asignacion a x
        contador.imprime(); //llama la funcion imprime

        

return 0;
} // fin a la fun main
