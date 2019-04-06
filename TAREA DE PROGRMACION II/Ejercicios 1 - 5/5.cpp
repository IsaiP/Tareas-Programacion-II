//Universidad De El Salvador
//Facultad Multidisiplinaria Oriental
//Copilado por: Adilam Isai Portillo Ceron //Carnet:PC18035

//Librerias necesarias
#include<iostream>
#include<conio.h>

using namespace std;

//Declaracion de funciones
void menorAcero(); //Funcion para saber el numero mayor

//Funcion principal
int main(){
		
	menorAcero();//Uso de la funcion
	
 	getch();
}

//Implementacion de la funcion mayor
void menorAcero(){
	
	//Variables necesarias en la funcion
	int a; //Varables para un numero
	int b; //Varables para un numero	
		
	cout << "Ingrese el primer numero: "; cin >> a;
	cout << "Ingrese el segundo numero: "; cin >> b;
	cout << endl;
	
	//Punteros necsarios para la funcion
	int *puntero_1 = &a;
	int *puntero_2 = &b;
	
	//Condicion para saber que numero es el mayor y caul es el menor
	/*Incio de condicion*/
	if(*puntero_1 > *puntero_2){
		cout << "El numero mayor es: " << *puntero_1 << endl;
		
		*puntero_2 = 0;
		cout << "El numero menor es: " << *puntero_2;
	}
	else{
		
		cout << "El numero mayor es: " << *puntero_2 << endl;
		
		*puntero_1 = 0;
		cout << "El numero menor es: " << *puntero_1;
	}
}
