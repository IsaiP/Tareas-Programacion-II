// Clase 04-04-19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Copilado por: Adilman Isai Portillo Ceron. PC18035

#include <conio.h>
#include <iostream>
#include <windows.h>

using namespace std;

class Figura {

private:
	float base;
	float altura;
public:
	Figura() {
		this->base = 0;
		this->altura = 0;
	}
	Figura(float a, float b) {
		this->base = a;
		this->altura = b;
	}
	void setbase(float b)//para la base 
	{
		this->base = b;
	}
	float getbase()
	{
		return this->base;
	}

	void setaltura(float a)//para la altura
	{
		this->altura = a;
	}
	float getaltura()
	{
		return this->altura;
	}

	virtual float area() = 0;
	virtual float perimetro() = 0;

};
/*class Color
{
	public:
		void Colorear ()
		{
			cout << "estoy pintando" <<endl;
		}
};*/
class Rectangulo : public Figura
{
public:
	float area()
	{
		return getbase()* getaltura();
	}
	float perimetro()
	{
		return 2 * getbase() + 2 * getaltura();
	}
	void imprimirR()
	{
		for (int i = 0; i < getaltura(); i++)
		{
			cout << endl;
			for (int j = 0; j < getbase(); j++)
				cout << ("_\t");
		}
	}
};
class Cuadrado : public Figura
{
public:
	float area()
	{
		return getbase()* getaltura();
	}
	float perimetro()
	{
		return 2 * getbase() + 2 * getaltura();
	}
	void imprimirC()
	{
		for (int i = 0; i < getaltura(); i++)
		{
			cout << endl;
			for (int j = 0; j < getbase(); j++)
				cout << ("*");
		}
	}
};

class Triangulo :public Figura {
private:
	float lado1;
	float lado2;
public:

	void setLado1(float l) {
		this->lado1 = l;
	}
	float getLado1() {
		return this->lado1;
	}

	void setLado2(float l) {
		this->lado2 = l;
	}
	float getLado2() {
		return this->lado2;
	}

	float area() {
		/*float semi = (getbase() + getLado1() + getLado2()) / 2;
		float area = sqrt(semi * (semi - lado1) * (semi - lado2) * (semi - getbase()));
		return area;*/
		return (getbase() * getaltura()) / 2;
	}

	float perimetro() {
		return (getLado1() + getbase() + getLado2());
	}

	void imprimirT() { //imprimira el rectangulo
		cout << endl;
		for (int i = 0; i < getbase(); i++) {
			int x = getbase() - i;
			for (int j = 0; i >= j; j++) {

				while (x != 0) {
					cout << " ";
					x--;
				}
				cout << "* ";
			}
			cout << endl;
		}
		/*for(int i = 0; i < getbase(); i++){
			int x = getbase()-i;
			for(int j = 0; j < getLado2(); j++){

					while(x != 0){
						cout << " ";
						x--;
					}
					cout << "* ";
			}
			cout << endl;
		}
		cout << endl;*/
	}
};


class Principal
{
public:
	Principal()
	{

		Rectangulo* r = new Rectangulo();
		r->setbase(6);
		r->setaltura(4);
		cout << r->getbase() << " " << r->getaltura() << endl;
		cout << "area:" << r->area() << endl;
		cout << "Rectangulo" << endl;
		r->imprimirR();
		cout << endl;
		cout << endl;
		/***********/
		Cuadrado* c = new Cuadrado();
		c->setbase(7);
		c->setaltura(4);
		cout << c->getbase() << " " << c->getaltura() << endl;
		cout << "area:" << c->area() << endl;
		cout << "Cuadrado" << endl;
		c->imprimirC();
		cout << endl;
		cout << endl;
		/***********/
		Triangulo* t = new Triangulo();
		t->setbase(5);
		t->setaltura(4);
		cout << t->getbase() << " " << t->getaltura() << endl;
		cout << "area:" << t->area() << endl;
		cout << "Triangulo" << endl;
		t->imprimirT();
		cout << endl;
	}


};

int main() {


	Principal* pro = new Principal();
	//getch();
	return 0;
	system("pause");
}
//figura *t =new figura(0,0);
//t->setbase(4);
//cout<<t->getbase();