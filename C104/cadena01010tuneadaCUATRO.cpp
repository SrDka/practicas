#include<iostream>
#include <cstdlib>	// para que corran los programas en sistemas de 64 bits
#include <string>
#include <ctime>
#include<windows.h>
using namespace std;

int main(){
	int y,x;
	int contador1=0, contador2=0;
	string nombre1="Ana", nombre2="Pedro";//OJO son objetos de la clase string
	system("color 02");//0-fondo  2-texto
	// 0 = Negro 1 = Azul 2 = Verde 3 = Aguamarina 4 = Rojo 5 = Purpura 6 = Amarillo
	srand ( time (NULL));//semilla para rand()
	do{ 
		
		y= rand();
		x= y%2; //resto 0 o 1
		if(contador1>contador2){
			system("color 02");
		}else if(contador2>contador1){
			system("color 04");
		}else{
			system("color 06");
		}
		if(x==0){
			contador1++;
			for(int i=0; i<nombre1.length(); i++){
				cout<<nombre1[i];//aceedemos letra a letra a nombre1 como si fuera un array
				Sleep(40);
			}
		}
		if(x==1){
			contador2++;
			for(int i=0; i<nombre2.length(); i++){
				cout<<nombre2.at(i);//accedemos letra a letra con el método at() del objeto nombre2
				Sleep(40);
			}
		}
		cout<<", ";
	//	Sleep(800);//retardo en milisegundos
	} while(1);
}

