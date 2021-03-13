#include <iostream>
#include <string.h>

//comentario//

using namespace std;


class Diaanio{
    public:
        void visualizar();
        int anio;
        int mes;
        int dia;
};

void Diaanio::visualizar(){
    char nommes[80];
    
    if(mes == 01) strcpy(nommes, "Enero");
    if(mes == 02) strcpy(nommes, "Febrero");
    if(mes == 03) strcpy(nommes, "Marzo");
    if(mes == 04) strcpy(nommes, "Abril");
    if(mes == 05) strcpy(nommes, "Mayo");
    if(mes == 06) strcpy(nommes, "Junio");
    if(mes == 07) strcpy(nommes, "Julio");
    if(mes == 8) strcpy(nommes, "Agosto");
    if(mes == 9) strcpy(nommes, "Septiembre");
    if(mes == 10) strcpy(nommes, "Octubre");
    if(mes == 11) strcpy(nommes, "Noviembre");
    if(mes == 12) strcpy(nommes, "Diciembre");
    if(mes == 00 && mes > 12) strcpy(nommes, "Mes no valido");
    cout<< dia <<"/"<<nommes<<"/"<<anio<<endl;
}

int main(){
    

    Diaanio hoy, cumpleanios;
    cout<<"\t\tIntrodusca la fecha del dia de hoy \n\n";
    cout<<"Introdusca el anio: ";
    cin>>hoy.anio;
    cout<<"\nIntrodusca el numero del mes: ";
    cin>>hoy.mes;
    cout<<"\nIntrodusca el numero del dia: ";
    cin>>hoy.dia;
    cout<<"\n"<<endl;
    cout<<"\t\tIntrodusca su fecha de nacimiento \n\n";
    cout<<"Introdusca el anio: ";
    cin>>cumpleanios.anio;
    cout<<"\nIntrodusca el numero del mes: ";
    cin>>cumpleanios.mes;
    cout<<"\nIntrodusca el numero del dia: ";
    cin>>cumpleanios.dia;
    cout<<"\n\nLa fecha del dia de hoy es: ";
    hoy.visualizar();
     cout<<"\nSu fecha del dia de hoy es: ";
    cumpleanios.visualizar();

    if(hoy.mes == cumpleanios.mes && hoy.dia == cumpleanios.dia){
        cout<<"\n\t FELIZ CUMPLEAÑOS! \n";
    }
    else{
        cout<<"\n\t Hoy no es tu cumpleaños :c\n";
    }
    system("pause");
}