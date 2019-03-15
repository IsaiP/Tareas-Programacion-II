/*Copilado por Adilman Isai Portillo Ceron PC18035*/
/*Programa de colas utilizado para vectores*/

#include<iostream> 
#include<queue>
#include<windows.h>
using namespace std;

/*Estructura del vector*/
struct vect{
	float x;
	float y;
	float z;
};


void clear(bool &err){ //Limpia la variable(dato es incorrecto)

	
	if(cin.fail()) //si al ingresar el dato da error
	{
		err = true;
		cin.clear(); //limpia la variable para que pueda ser ingresada nuevamente
		cin.ignore();
		cout << "Ingrese un valor valido\n\n";
	}
	else{
		err = false; //el dato no es erroneo
	}
}

void agregar(vect &aux){
	bool err = false; //indica si un dato fue ingresado mal
	do{
	cout << "Ingrese la coordenada x: "; cin >> aux.x;
	clear(err);

	cout << "Ingrese la coordenada y: "; cin >> aux.y;
	clear(err);

	cout << "Ingrese la coordenada z: "; cin >> aux.z;
	clear(err);
	}while(err); //mientras el dato sea malo, seguira pidiendo un valor valido
}

void mostrar(int large, vect *inicio){
	int i=1;
	while(large>0){
		cout << "****************************\n";
		cout << "* La coordenada x"<<i<<" es: " << inicio->x << " *\n";
		cout << "* La coordenada y"<<i<<" es: " << inicio->y << " *\n";
		cout << "* La coordenada z"<<i<<" es: " << inicio->z << " *\n";
		cout << "****************************\n\n";
		inicio++; //aumenta la posicion del puntero
		large--; //disminuye en uno la cantidad de espacios que faltan por recorrer
		i++;
	}
}

void promedio(int large, vect *inicio){
	vect promedio;
	int i = 0;
	while(large>0){
		
		promedio.x += inicio->x;
		promedio.y += inicio->y;
		promedio.z += inicio->z;
		inicio++; //aumenta la posicion del puntero
		large--; //disminuye en uno la cantidad de espacios que faltan por recorrer
		i++;
	}
	
	promedio.x = (promedio.x/i);
	promedio.y = (promedio.y/i);
	promedio.z = (promedio.z/i);
	cout << "****************************************\n\n";
	cout << "El promedio de la coordenada x es: " << promedio.x << "\n";
	cout << "El promedio de la coordenada y es: " << promedio.y << "\n";
	cout << "El promedio de la coordenada z es: " << promedio.z << "\n\n";
	cout << "****************************************\n\n";
}

void portada(){
	cout << "********************************************\n\n";
	cout << "\t     ****************\n";
	cout << "\t     *  BIENVENIDO  *\n";
	cout << "\t     ****************\n\n";
	cout << "********************************************\n";
	cout << "*          PROGRAMA COPILADO POR:          *\n";
	cout << "*       ADILMAN ISAI PORTILLO CERON        *\n";
	cout << "*             CARNET: PC18035              *\n";
	cout << "********************************************\n\n";
	
	system("pause");
	system("cls");

}
void menu(){
	cout << "\n\t ELIJA UNA OPCION";
	cout << "\n\t1.AGREGAR VECTOR";
	cout << "\n\t2.MOSTRAR VECTOR";
	cout << "\n\t3.PROMEDIO DE LOS VECTORES";	
	cout << "\n\t4.ELIMINAR VECTOR";
	cout << "\n\t5.SALIR";
	
}

int main(){
	queue<vect> cola;
	vect aux;
	vect *inicio;
	int opt;
	int large;
	bool rep = false;
	int tam; //recolecta el espacio necesario para el nodo
	
	portada();
	do{
			menu();
			cout << "\n      Ingrese la opcion: ";cin >> opt;
			cout << endl;
			system("pause");
			system("cls");
			
		switch(opt){
			case 1:
				agregar(aux);
				cola.push(aux);
				inicio = &cola.front();
				break;
			case 2:
				if(!cola.empty()){
					mostrar(large,inicio);
					tam = (large * 3) * 32;
					cout << "\nEsta cola necesita un total de " <<tam<< " bits\n";
				}else
					cout << "La cola esta vacía\n";
				break;
			case 3:
				if(!cola.empty()){
				promedio(large,inicio);
				}else
					cout << "La cola esta vacía\n";
				break;
			case 4:
				if(!cola.empty()){
					cout << "Las coordenadas han sido eliminadas\n";
					cola.pop();
					inicio = &cola.front();	
				} else
					cout << "La cola esta vacía\n";
				break;
			case 5:
				return 0;
			default:
				cout << "Ingrese un valor dentro del rango\n";
		}
		
			large = cola.size();
			cout << "\nPresione cualquier tecla para continuar...\n";
			cin.get();
			cin.get();
			system("cls");
	}while(true);

}
