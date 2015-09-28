#pragma once 
#include "Stalk.h"
#include "packing.h"
#include"Flower.h"

class Chrys : public Flower, public Stalk, public packing
{

public:
	Chrys(void);
	void Cname();
	~Chrys(void);
};
