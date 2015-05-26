/*
FUNCIONES EN LINEA Y AUTOMATICAS

inline valor_devuelto nombre_funcion(parametros)
{
	cuerpo;
}

valor_devuelto nombre_funcion(parametros){cuerpo;}
*/

#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

inline int valor(int x)
{
	return !(x%2);
}

main()
{
	int a;
	cout<<"Introducir Valor: "<<endl;
	cin>>a;
	if(valor(a))
		cout<<"Es par";
	else
		cout<<"Es impar";
		
	getch();
}
