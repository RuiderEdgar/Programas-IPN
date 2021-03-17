#include <iostream>
using namespace std;
								// crea la clase cola 
class cola
{
	int c[100];
	int posf,posp; 
	public:
		cola(int id);         	//constructor
		~cola(void);        	//destructor
		void ponc(int i);
		int quitac(void);
		int quien;         		//contiene el numero de de identificacion de la cola
};

cola::cola(int id)				//esta es la funcion de construccion
{
	posp = posf = 0;
	quien = id;
	cout <<"La cola ha sido inicializada : "<< quien<<"\n";
}; 

cola::~cola(void)
{
	cout << "La cola ha sido destruida : "<< quien << "\n";
};  
 void cola::ponc(int i)
 {
 	if (posf==100)
 	{
 		cout<< "la cola esta llena ";
 	    return; 
	}
	else 
	{ 
	 posf++;
	 c[posf]=i;
	 cout<<"El elemento "<<c[posf] << "  esta en la cola: "<< quien <<endl; //se imprime en que cola está almacenado
    }
 }
 
 int cola::quitac(void)
 {  
 	if (posp==posf)
	 {
	 	cout<<"la cola esta vacia";
	 	return 0;
	 }
	 posp++;
	 //cout<<"la cola eliminada : "<<c[posp] <<"\n";
	 return  c[posp];
  } 
  main()
  {
  	cola a(1), b(2); 	//se crean dos objetos del tipo cola 
  	cout<<"\n";
  	a.ponc(10);
  	b.ponc(19);
  	
  	a.ponc(20);
  	b.ponc(1);
  	cout<<"\n";
  	cout<<"El elemento eliminado es: "<< a.quitac() <<". De la cola: "<<a.quien<<endl; //añadimos el numero de la cola para ver en que cola se elimino
  	cout<<"El elemento eliminado es: "<< a.quitac() <<". De la cola: "<<a.quien<<endl;//añadimos el numero de la cola para ver en que cola se elimino
	cout<<"El elemento eliminado es: "<< b.quitac() <<". De la cola: "<<b.quien<<endl;//añadimos el numero de la cola para ver en que cola se elimino
	cout<<"El elemento eliminado es: "<< b.quitac() <<". De la cola: "<<b.quien<<"\n"<<endl;//añadimos el numero de la cola para ver en que cola se elimino
	
	return 0;
}
