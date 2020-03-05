#include <iostream>
#include <stdlib.h>
using namespace std;

class Rectangulo{
	public: 
		int ancho,largo;
	public:
			void perimetro(){
				int p=2*(ancho+largo);
				cout << " El perimetro de un rectangulo de " << ancho << " * " << largo << " es: " << p << endl;
			};
			void area(){
				int a = ancho*largo;
				cout << " El area de un rectangulo de " << ancho << " * " << largo << " es: " << a << endl;
 			};
};

int main(){
	
	Rectangulo r1;
	Rectangulo r2;
	r1.ancho=2;
	r1.largo=4;
	r1.perimetro();
	
	r1.ancho=6;
	r1.perimetro();
	
	r2.ancho=2;
	r2.largo=4;
	r2.perimetro();
	r2.area();
	
	system("pause");
	return 0;
}
