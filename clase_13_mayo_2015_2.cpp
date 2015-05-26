//13-mayo-2015 segundo programa

#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class miclase
{
	int a,b;
public:
	void obtener(int i, int j)
	{
		a=i;
		b=j;
	}
	void mostrar()
	{
		cout<<a<<" "<<b<<" "<<"\n";
	}
};
main()
{
	miclase o1,o2;
	o1.obtener(10,4);
	o2=o1;
	o1.mostrar();
	o2.mostrar();
	getch();
}
