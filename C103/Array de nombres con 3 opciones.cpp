#include <iostream>
using namespace std;

int main(){
	
	string lista[5];
	int opcion;
	
	do {
		cout << "1- Introducir nombres" << endl;
		cout << "2- Ver nombres" << endl;
		cout << "3- Salir" << endl;
		cin >> opcion;
		
		if(opcion == 1){
			
			for (int i=0 ; i<=4 ; i++){
				
				cout << "Escribe un nombre: ";
				cin >> lista[i];
			}
		}
		
		
		if(opcion == 2){
			
			for (int i=0 ; i<=4 ; i++){
			cout << i+1 << " " << lista[i] << endl;
			}
		}	
			
	}
	
	while (opcion !=3);
		
	system("pause");
	return 0;
	

	
	
}
