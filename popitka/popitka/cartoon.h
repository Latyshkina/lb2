#pragma once
#include "rezecer.h"
#include "programm.h"
class cartoon:
	public rezecer, public programm 
{
	char *name;
public:
	cartoon();
	void setnamecartoon(char *name);
	void getnamecartoon();

	~cartoon();
};