#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

main()
{
	int *p;
	int i;
	p = new int[5];
	if (!p)
	{
		cout<<"Error de asignacion\n";
		exit(1);
	}
	for (i = 0; i < 5; i++)
	{
		p[i]=i+1;
	}
	for (i = 0; i < 5; i++)
	{
		cout<<"Esto es un entero en p["<<i<<"]";
		cout<<p[i]<<"\n";
	}
	delete p[];
	getch();
};