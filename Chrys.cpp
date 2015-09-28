#include "StdAfx.h" 
#include "Chrys.h"
#include <iostream> 

using namespace std;

Chrys::Chrys(void)
{
	cout << "Вызывается конструктор Chrys" << endl;
}

Chrys::~Chrys(void)

{
	cout << "Вызывается деструктор Chrys" << endl;
}

void Chrys::Cname()
{
	cout << "Я хризантема и мой вид ";
}
