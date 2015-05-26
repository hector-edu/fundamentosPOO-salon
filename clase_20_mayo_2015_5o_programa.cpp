#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int &f();
int x;
main()
{
	f()=100;
	cout<<"valor de x: "<<x;
	getch();
}
int &f()
{
	return x;
}
