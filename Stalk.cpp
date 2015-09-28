#include "StdAfx.h" 
#include "Stalk.h"
#include <iostream> 

using namespace std;

Stalk::Stalk(void)

{
	cout << "Вызывается конструктор Stalk" << endl;
}

Stalk::~Stalk(void)
{
	cout << "Вызывается деструктор Stalk" << endl;
}

void Stalk::lenght(int l)
{
	cout << "Длина моего стебля " << l << endl;
}
