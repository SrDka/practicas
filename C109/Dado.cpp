#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Dado {
	private:
		int num;
	public:
		void tirar();
		void mostrar();
};

void Dado::tirar(){
	do {
		srand(time(0));
		num=rand()%7;
	} 	while (num < 1);
}

void Dado::mostrar(){
	cout << " el: " << num << endl;
}

int main(){
	
	Dado dado1;
	int opcion;
	
	do {
		cout << "1.- Tirar dado."<<endl;
		cout << "2.- Mostrar numero."<<endl;
		cout << "3.- Salir."<<endl;
		
		cout<<"Opcion: ";
		cin>>opcion;
		
		if(opcion==1){
			dado1.tirar();
		}
		if(opcion==2){
			dado1.mostrar();
		} 
	} while (opcion!=3);	
}
