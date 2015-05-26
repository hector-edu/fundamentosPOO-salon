#include<conio.h>
#include<stdio.h>
#include<iostream>

using namespace std;

class figura
{
	float base,altura,area;
	
	public:
		void pide_base(float x)
		{
			base=x;
		}
		
		void pide_altura(float x)
		{
			altura=x;
		}
		
		void calcula();
		float muestra()
		{
			return area;
		}
	};
	
void figura::calcula()
{
	area=(base*altura)/2;
}

main()
{
	figura w;
	
	w.pide_base(35);
	w.pide_altura(50);
	w.calcula();
	
	cout<<w.muestra();
	getch();
}
