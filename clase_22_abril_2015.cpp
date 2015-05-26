#include<conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;

class objeto
{
	int x;

	public:
	void pide_x(int a)
	{
		x=a;
	}

	void imprime()
	{
		cout<<x;
	}
	
	void imprime_valor(int a)
	{
		cout<<a;
	}
};

main()
{
	objeto x[30];

	for(int indice =0;indice<30;indice++)
		x[indice].pide_x(indice);
		
	for(int indice =0;indice<30;indice++)
		cout<<indice<<"  "<<x[indice].imprime()<<endl;
		
		
}
