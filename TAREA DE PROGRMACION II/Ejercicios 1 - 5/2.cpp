//Universidad De El Salvador
//Facultad Multidisiplinaria Oriental
//Copilado por: Adilam Isai Portillo Ceron //Carnet:PC18035

//Librerias a usar en el proyecto
#include<iostream>
#include<conio.h>

using namespace std;

//Declaracion de funciones
void funcion();

/*Funcion Principal*/
int main(){
		
	funcion();//Uso de funcion
	
	getch();

}

//Implementacion de la funcion
void funcion(){
	
	//Varables necesarais para la funcion
	int a; //Varaible donde se guardara un numero
	int resp; //variable para respuestas
	
	cout << "Ingrese un numero: "; cin >> a;
	
	//Puntero que toma el valor de a
	int *puntero = &a;
	
	//Formula para multiplicar por 10 el valor de el puntero
	resp = *puntero * 10;
	
	cout << "El valor del numero " << a << " multiplicado por 10 es de: " << resp;	
}
