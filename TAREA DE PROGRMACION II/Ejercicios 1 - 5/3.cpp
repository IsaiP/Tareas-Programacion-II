//Universidad De El Salvador
//Facultad Multidisiplinaria Oriental
//Copilado por: Adilam Isai Portillo Ceron //Carnet:PC18035

//Librerias a usar en el proyecto
#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

//Declaracion de funciones
void potencia();

/*Funcion Principal*/
int main(){
		
	potencia();//Uso de funcion
	
	getch();

}

//Implementacion de la funcion
void potencia(){
	
	//VArables necesarais para la funcion
	int a; //Varaible para uardar un numero (base)
	int b; //Varaible para uardar un numero (exponente)
	int resp; //variable para respuestas
	
	cout << "Ingrese un numero para la base: "; cin >> a;
	cout << "Ingrese un numero para el exponente: "; cin >> b;
	
	//Puntero que toma el espacio de memoria de a
	int *puntero = &a;
	//Puntero que toma el espacio de memoria de b
	int *puntero_2 = &b;
	
	//Formula elevar la base al exponente ingresados
	resp = pow(*puntero, *puntero_2),
	
	cout << "El numero " << a << " elevado a " << b << " es igual a: "	<< resp;
}
