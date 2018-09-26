#include<iostream>
using namespace std;

int main(){
	int *ptr;
	
	int Nnumeros;
	cout<<"¿Cuantos numeros deseas guardar?";
	cin>>Nnumeros;
	ptr=new int[Nnumeros];
	
	//para generar una memoria dinamica
	for (int i=0; i<Nnumeros; i++){
		cout<<"Ingresa el numero: "<<endl;
		cin>>ptr[i];
	}
	delete[] ptr;
	return 0;
}
