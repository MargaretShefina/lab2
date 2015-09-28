#include "StdAfx.h" 
#include "packing.h"
#include <iostream> 

using namespace std;

packing::packing(void)
{
	cout << "Вызывается конструктор packing" << endl;
}

packing::~packing(void)

{
	cout << "Вызывается деструктор packing" << endl;
}

void packing::pack(char *color)
{
	cout << "Цвет упаковки для букета: " << color << endl;
}
