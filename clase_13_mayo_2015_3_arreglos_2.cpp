#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class bidi
{
	int a,b;
	
public:
	bidi(int n, int m)
	{
		a=n;
		b=m;
	}
	int pasa_a()
	{
		return a;
	}
	int pasa_b()
	{
		return b;
	}
};

main()
{
	int fil,col;
	
	bidi objeto[3][2]=
	{
		bidi(1,2),
		bidi(3,4),
		bidi(5,6),
		bidi(7,8),
		bidi(9,10),
		bidi(11,12)
	};
	
	for(fil=0;fil<3;fil++)
	{
		for(col=0;col<2;col++)
		{
			cout<<objeto[fil,col].pasa_a();
			cout<<endl;
			cout<<objeto[fil,col].pasa_b();
			cout<<endl;
		}
	}
	getch();
};
