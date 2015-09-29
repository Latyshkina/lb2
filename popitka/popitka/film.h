#pragma once
#include "programm.h"
#include "rezecer.h"
class film:
	public programm, public rezecer
{ 
	char *name;
public:
	film();
	void setnamefilm(char *name);
	void getnamefilm();
	~film();

};