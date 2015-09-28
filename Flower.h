#pragma once 
#include"Flower.h"
class Flower
{
	char *name;

public:
	Flower(void);
	void setname(char *name);
	void getname();
	~Flower(void);
};
