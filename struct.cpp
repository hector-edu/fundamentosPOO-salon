/*
struct nombre
{
	variables y funciones publicas;
	private:
		variables y funciones privadas;
};
*/
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>

using namespace std;

struct tipo
{
	tipo(double b, char *n);
	void mostrar();
	
	private:
		double balance;
		char nombre[40];
};

tipo::tipo(double b, char *n)
{
	balance = b;
	strcpy(nombre,n);
}

void tipo::mostrar()
{
	cout<<"Nombre: "<<nombre;
	cout<<"    :$"<<balance;
	if(balance<0.0)cout<<"*****";
	cout<<endl;
}

main()
{
	tipo acc1(100.2,"Ricardo");
	tipo acc2(-12.34,"Antonio");
	acc1.mostrar();
	acc2.mostrar();
	getch();
}
