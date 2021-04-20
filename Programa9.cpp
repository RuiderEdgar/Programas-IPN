#include <iostream>
#include <conio.h>
#include "funtrigono.h"

using namespace std;

int main(){

int opc;
int co, ca, h;

do{
    system("cls");
    cout<<"\t\t\t\t\t\t.:MENU:.\n"<<endl;
    cout<<"1. Seno\n2. Coseno\n3. Tangente\n4. Secante\n5. Cosecante\n6. Cotangente\n0.Salir"<<endl;
    cin>>opc;
        switch (opc){
        case 0: //SALIR
            break;
        case 1: //SENO
            system("cls");
            cout<<"\nDigite el cateto opuesto (c.o): "<<endl;
            cin>>co;
            cout<<"Digite la hipotenusa (h): "<<endl;
            cin>>h;
            cout<<"\nEl seno es: "<<seno(co,h)<<endl;
            getch();
            break;
        case 2: //COSENO
            system("cls");
            cout<<"\nDigite el cateto adyacente (c.a): "<<endl;
            cin>>ca;
            cout<<"Digite la hipotenusa (h): "<<endl;
            cin>>h;
            cout<<"\nEl coseno es: "<<coseno(ca,h)<<endl;
            getch();
            break;
        case 3: //TANGENTE
            system("cls");
            cout<<"\nDigite el cateto opuesto (c.o): "<<endl;
            cin>>co;
            cout<<"Digite el cateto adyacente(c.a): "<<endl;
            cin>>ca;
            cout<<"\nLa tangente es: "<<tangente(co,ca)<<endl;
            getch();
            break;
        case 4: //COSECANTE
            system("cls");
            cout<<"\nDigite el cateto opuesto (c.o): "<<endl;
            cin>>co;
            cout<<"Digite la hipotenusa (h): "<<endl;
            cin>>h;
            cout<<"\nEl cosecante es: "<<cos(co,h)<<endl;
            getch();
            break;
        case 5: //SECANTE
            system("cls");
            cout<<"\nDigite el cateto adyacente (c.a): "<<endl;
            cin>>ca;
            cout<<"Digite la hipotenusa (h): "<<endl;
            cin>>h;
            cout<<"\nEl secante es: "<<sec(ca,h)<<endl;
            getch();
            break;
        case 6: //COTANGENTE
            system("cls");
            cout<<"\nDigite el cateto opuesto (c.o): "<<endl;
            cin>>co;
            cout<<"Digite el cateto adyacente(c.a): "<<endl;
            cin>>ca;
            cout<<"\nLa cotangente es: "<<cot(ca,co)<<endl;
            getch();
            break;
        default:
            cout<<"La opcion no esta dentro del menu"<<endl;
            getch();
            break;        
        }
}while (opc != 0);
system("cls");
cout<<"\nNos Vemos...";
getch();
}
