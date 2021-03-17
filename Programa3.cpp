#include <iostream>
using namespace std;

class contador 
{
	private:	
		unsigned int cuenta;         		 	// el contador
	public:	
		contador() { 	cuenta = 0; }			// constructor
		void inc_cuenta() {cuenta++; } 			//cuenta
		int  leer_cuenta() {return cuenta; }	//devuelve cuenta
};
main() 	
{
	contador  c1, c2; 			//define e inicializa
	//Para c1
    cout << " \nc1 " <<c1.leer_cuenta();
    for(int i=0; i<10; i++){
    c1.inc_cuenta();
    };
    cout <<" = " << c1.leer_cuenta();
    
    //Para c2
    cout << " \nc2 " <<c2.leer_cuenta();
    for (int i=0; i<15; i++){
        c2.inc_cuenta();
    };
	cout <<" = " << c2.leer_cuenta();
}	
