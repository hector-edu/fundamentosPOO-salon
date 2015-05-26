//this new, delete*** 20/mayo/2015

#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>

class stock
{
	char item[20];
	double coste;
public:
	stock(char *i, doblue o)
	{
		strcpy(item);
		coste=c;
	}

	void muestra();
};

void stock::muestra()
{
	cout<<item<<"\n";
	cout<<"PVP"<<coste;
}

main()
{
	stock obj("Tuerca"5.45);
	obj.muestra();
	getch();
}