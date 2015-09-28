#pragma once 
#include "Stalk.h"
#include "packing.h"
#include"Flower.h"

class Rose : public Flower, public Stalk, public packing
{

public:

	Rose(void);
	void Rname();
	~Rose(void);
};
