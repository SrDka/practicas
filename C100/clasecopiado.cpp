#include <iostream>
using namespace std;

class Titulo{
	public:
		string texto;
		
	void Escribir(){
		cout<<texto<<endl;
		Subrayar();
	}
	private:
	
	void Subrayar(){
		
		for (unsigned int i=0; i<texto.length();i++)
			cout << "-";
			cout << endl;
			
	}
	
};

int main(){
	
	Titulo saludo;
	saludo.texto = "Hola";
	saludo.Escribir();
	return 0;
}
