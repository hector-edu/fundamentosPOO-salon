#include<iostream>
#include<stdio.h>
#include<conio.h>


void f(int *n);
main()
{
	int i = 0;
	f(&i);
	cout<<"valor i:"<<i;
	getch();
}
void f(int *n)
{
	*n=100;
}