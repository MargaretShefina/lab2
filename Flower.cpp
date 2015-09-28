#include "StdAfx.h" 
#include "Flower.h"
#include <iostream> 

using namespace std;

Flower::Flower(void)
{
	cout << "Вызывается конструктор Flower" << endl;
}

Flower::~Flower(void)
{
	cout << "Вызывается деструктор Flower" << endl;
}
void Flower::setname(char *name)
{
     this->name=name;
}
void Flower::getname()
{
	cout<<"  "<<name<< endl;
}

