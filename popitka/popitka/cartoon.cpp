#include "stdafx.h"
#include "cartoon.h"
#include "rezecer.h"
#include <iostream>
#include "programm.h"
using namespace std;

cartoon::cartoon()
{
	cout<<"Вызывается конструктор мультфильма"<<endl;
}

void cartoon::setnamecartoon(char *name)
{
	this->name=name;
}

void cartoon::getnamecartoon()
{
	cout<<"Название мультфильма:"<<this->name<<endl;
}
cartoon::~cartoon()
{
	cout<<"Вызывается деструктор мультфильма "<<endl;
}