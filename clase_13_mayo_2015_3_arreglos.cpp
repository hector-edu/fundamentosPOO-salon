// Arreglos 13-mayo-2015

/*
ARREGLOS
DECLARACIONES

nombre_clase nombre_objeto[no_elementos]

nombre_clase nombre_objeto[no_elementos]={elementos}

INICIALIZACION

nombre_objeto[indice].funcion(valores)

*/

#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class ejemplo
{
	int a;
public:
	void pasar(int x)
	{
		a=x;
	}
	int mostrar()
	{
		return a;
	}
};

main()
{
	ejemplo obj[4];
	int indice;
	
	for(indice=0;indice<4;indice++)
		obj[indice].pasar(indice);
	for(indice=0;indice<4;indice++)
	{
		obj[indice].mostrar();
		cout<<endl;
	}
	getch();
}
