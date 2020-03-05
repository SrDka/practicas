#include <iostream>
#include <stdlib.h>
using namespace std;

class Rectangulo{
	private: 
		int ancho, largo;
	public:
		Rectangulo(int, int);
		void perimetro();
		void area();
};

Rectangulo::Rectangulo(int _ancho, int _largo){
	ancho = _ancho;
	largo = _largo;
}
void Rectangulo::perimetro(){
	int p = 2*(ancho+largo);
	cout<<"El perimetro de un rectangulo de "<<ancho<<" * "<<largo<<" es:"<<p<<endl;
}
void Rectangulo::area(){
	int a = ancho*largo;
	cout<< "El area de un rectangulo de "<<ancho<<" * "<<largo<<" es:"<<a<<endl;
}

int main(){
	Rectangulo r1(2,10);
	r1.perimetro();
	r1.area();
	
	int ancho, largo;
	cout<< "Calculo de area y perimetro de un rectangulo"<<endl;
	cout<<"Ancho: ";
	cin>>ancho;
	cout<<"Largo: ";
	cin>>largo;
	
	Rectangulo r2(ancho, largo);
	r2.perimetro();
	r2.area();
	
	system("pause");
	return 0;
}
