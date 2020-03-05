#include <iostream>
#include <cstdlib>
using namespace std;

class Persona{
	
		string nombre;
	public: 
		void dormir();
		void hablar();
		void contar();
		void adquirirNombre();
		void decirNombre();
};

void Persona::dormir(){
	cout<<"zzzzzzz"<<endl;
}

void Persona::hablar(){
	cout<<"bla bla bla"<<endl;
}

void Persona::contar(){
	cout<<"1, 2, 3, 4, 5..."<<endl;
}

void Persona::adquirirNombre(){
	cout<<"Soy una persona. Introduce mi nombre: ";
	cin>>nombre;
}

void Persona::decirNombre(){
	cout<<"Mi nombre es: "<< nombre << endl;
}

int main(){
		
	int respuesta = 0;
	Persona p;
	
	cout<<"Desea crear una persona? 1=si y 0=no";
	cin>>respuesta;
	
	
	if(respuesta==1){
		
		p.adquirirNombre();
		
		cout<<"Desea que diga mi nombre? 1=si 0=no: " ;
		cin>>respuesta;
	} else { 
		cout << " Pues vale";
		system("pause");
	}
	
	if (respuesta==1){
		p.decirNombre();
	}
	cout<<"Desea oirme hablar? 1=si 0=no ";
	cin>>respuesta;
	if (respuesta==1){
		p.hablar();
	}
	cout<<"Desea que me vaya a dormir? 1=si 0=no ";
	cin>>respuesta;
	if (respuesta==1){
		p.dormir();
	}
	cout<<"Desea oirme contar? 1=si 0=no ";
	cin>>respuesta;
	if (respuesta==1){
		p.contar();
	}
	system("pause");
	return 0;
}
	
	

