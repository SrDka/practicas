#include<iostream>
#include <cstdlib>	// para que corran los programas en sistemas de 64 bits
#include <string>
#include <ctime>
#include<windows.h>
using namespace std;

int main(){
	int y,x;
	string nombres[2]={"Juan","Merce"};
	system("color 02");//0-fondo  2-texto
	// 0 = Negro 1 = Azul 2 = Verde 3 = Aguamarina 4 = Rojo 5 = Purpura 6 = Amarillo
	srand ( time (NULL));//semilla para rand()
	do{
		y= rand();
		x= y%2; //resto 0 o 1
		if(x==0){
			cout<<nombres[0];
		}
		if(x==1){
			cout<<nombres[1];
		}
		
		//cout<< x;
		Sleep(80);//retardo en milisegundos
	} while(1);
}

