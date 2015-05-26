//clase 13/mayo/2015

#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class Students
{
public:
	Students()
	{
		cout<<"Constructing student";
		semesterhours=0;
		gpa=0.0;
	}
	~Students()
	{
		cout<<"Destructing Students\n";
	}
protected:
	int semesterhours;
	float pga;
};

class Teacher
{
public:
	Teacher()
	{
		cout<<"Constructing Teacher\n";
	}
	~Teacher()
	{
		cout<<"Destructing Teacher\n";
	}
};

class Tutor
{
public:
	Tutor()
	{
		cout<<"Constructing Tutor\n";
		visit=0;
	}
	~Tutor()
	{
		cout<<"Destructing Tutor\n";
	}
protected:
	Student s;
	Teacher t;
	int visit;
};

main(int argc, char const *argv[])
{
	Tutor tp;
	getch();
}
