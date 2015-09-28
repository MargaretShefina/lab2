#include "StdAfx.h" 
#include "Rose.h"
#include <iostream> 

using namespace std;

Rose::Rose(void)

{
cout << "Вызывается конструктор Rose" << endl;
}

Rose::~Rose(void)

{
	cout << "Вызывается деструктор Rose" << endl;

}

void Rose::Rname()
{
	cout << "Я роза и мой вид ";
}
