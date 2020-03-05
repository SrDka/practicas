#include <iostream>
using namespace std;

int main(){
	
	string Lista[5];
	for (int i=0 ; i<=4 ; i++){
		cout << "Dime el nombre " << i+1 << ": ";
		cin >> Lista[i];
	}
	for (int i=4 ; i>=0 ; i--){
		cout << "El nombre " << i+1 << " es " << Lista[i] << endl;	
	}
	return 0;
		
	
	
}
