#include <iostream>
#include <conio.h>
using namespace std;

class fecha{
    int dia, mes, year;

    public:
    
    void mostrarfecha(){
        cout<<dia<<"/"<<mes<<"/"<<year;
    }
    void fijarfecha(int d, int m, int y){
    	dia = d;
    	mes = m;
    	year = y;
	}
};

int main(){
    fecha f;
    int x, y,z;
    cout<<"Escriba el numero del dia: ";
    cin>>x;
    cout<<"\nEscribe el numero del mes: ";
    cin>>y;
    cout<<"\nEscribe el anio:";
    cin>>z;
    f.fijarfecha(x, y, z);
    cout<<"\n\nLa fecha es: ";
    f.mostrarfecha();   
    for(int i=0; i<10; i++){
    	x++;
    	 f.fijarfecha(x, y, z);
    	cout<<"\nLa fecha despues de modificar es: ";
    	f.mostrarfecha();
	}
	cout<<"\n";
    getch();
}