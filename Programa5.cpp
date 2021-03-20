#include <iostream>
#include <conio.h>
using namespace std;

class tiempo{
    private:
    int hrs;
    int min;
    int seg;

    public: 
    tiempo(){
        seg = 0;
        min = 0;
        hrs = 0;
    }

    void verhora(void){
        cout<<hrs<<":"<<min<<":"<<seg;
    }

    void leertiempo(){
        cin>>hrs>>min>>seg;
    }

    tiempo & operator ++(){
        seg=seg+2; //Cambiando el incremento de 2 en 2
        if(seg>59){
            seg -= 60;
            ++min;
        }
        if(min>59){
            min -= 60;
            ++hrs;
        }
    return * this;
    }
};

int main(){
    tiempo t1;
    cout<<"\n introdusca la hora hh mm ss separandolos por espacios: ";
    t1.leertiempo();
    for(int i=0; i<=10; i++){
        cout<<"\nVisualizar t1: ";
        t1.verhora();
        ++t1;
        cout<<"\nDespues de iincrementar, t1= ";
        t1.verhora();
        cout<<"\n";
    }
    getch();
    return 0;
}