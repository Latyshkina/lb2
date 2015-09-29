#pragma once 
#include "rezecer.h"
#include "programm.h"
class picfilm:
	public rezecer, public programm
{
	char *name;
public:
	picfilm();
	void setnamepicfilm(char *name);
	void getnamepicfilm();
	~picfilm();
};