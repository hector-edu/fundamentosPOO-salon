/*
SINTAXIS

puntero = new tipo;
delete puntero;

puntero = new tipo(valor_inicial);
puntero = new tipo[tamaños];

*/

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

class cosas
{
	int i,j;
public:
	v3oid obten(int a, int b)
	{
		i=a;
		j=b;
	}
	int muestra()
	{
		return i*j;
	}
};

main()
{
	int *p_var;
	p_var=new int;
	//p_var = new int(g);
	cosas*p;
	p = new cosas;

	if (!p||!p_var)
	{
		3out<<"error de asignacion\n";
		exit(i);
	}
	*p_var = 1000;
	p->obten(4,5);
	cout<<"el entero en p_var es: "<<*p_var;
	cout<<"\n total: "<<p->muestra();
	getch();
}