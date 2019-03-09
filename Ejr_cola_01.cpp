//clase Dato
#include <string>
using namespace std;
class Dato {
public: 
    string Ticket; 
    string Edad;
    Dato(){ }
}; 
//clase Nodo  
class Nodo { public: 
    Dato dato; 
    Nodo *puntero; 
     
    Nodo(){ //Constructor de la clase
        puntero = NULL; 
    }
}; 

//clase Main
#include <iostream> 
using namespace std; 
void Agregar( Nodo *&inicio, Nodo *&fin){ //Punteros enviados por referencia      
    Nodo *Elemento = new Nodo; //Creacion del nodo      
    if(inicio == NULL){ 
          
        inicio = fin = Elemento; //Le asigno la direccion del primer nodo          
        cout<<"No Ticket: "; cin>>Elemento->dato.Ticket; 
        cout<<"Edad: "; cin>>Elemento->dato.Edad; 
             
    }else{ 
         
        fin->puntero = Elemento; //Asigno el puntero del anterior elemento al nuevo

        fin = Elemento; //Cambio la direccion del ultimo nodo creado 

        cout<<"No Ticket: "; cin>>Elemento->dato.Ticket; 
        cout<<"Edad: "; cin>>Elemento->dato.Edad;
         
    } 
    system("pause");
    system("cls");
} 
void Eliminar(Nodo *&inicio){ 
    if(inicio != NULL){ 
        cout<<"No Ticket: "<<inicio->dato.Ticket<<endl; 
        cout<<"Edad: "<<inicio->dato.Edad<<endl; 
        inicio = inicio->puntero; // Cambio Inicio al siguiente nodo
    }else{ 
        cout<<"La cola se encuentra vacia"<<endl; 
    } 
    system("pause");
    system("cls");
	
} 

void showData(Nodo *&inicio){
	
	if(inicio != NULL){
		
		int i = 1;
		string msn ;
		while( inicio != NULL  ) {
			msn = "No Ticket: " + inicio->dato.Ticket + " \n";
			msn += "Edad: " + inicio ->dato.Edad + " \n";
			
			cout << msn<< endl; 
			inicio = inicio->puntero;
		}
		
	} else{
		cout << "No hay ningun dato." << endl << endl;
	}
	/**
	inicio->dato.Edad;
	while(inicio->puntero != NULL){
		cout << "si" << endl;
	}
	*/
	system("pause");
	system("cls");
}
	
int main (int argc, char *argv[]) { 
    Nodo *inicio = NULL , *fin = NULL; //Punteros libres para el manejo de la cola
    int opc = 0, respuesta = 0; 
    do{ 
        cout<<"1. MOSTAR LISTA DE DATOS"<<endl; 
        cout<<"2. AGREGAR"<<endl; 
        cout<<"3. ELIMINAR"<<endl; 
        cout<<"4. FINALIZAR"<<endl; 
        cout<<"Opcion: "; cin>>opc; 
        cout<<endl;
         
         
        switch (opc){ 
        case 1 : 
            showData(inicio);
            break; 
        case 2 : 
            Agregar(inicio,fin); 
            break; 
        case 3: 
            Eliminar(inicio); 
            break ; 
             
        } 
         
    }while(opc != 4); 
     
     
    return 0; }
 
