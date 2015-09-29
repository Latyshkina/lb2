#include "stdafx.h"
#include "film.h"
#include "programm.h"
#include "rezecer.h"
#include <iostream>

using namespace std;

film::film()
{
	cout<<"Вызывается конструктор фильма"<<endl;
}

void film::setnamefilm(char *name)
{
	this->name=name;
}

void film::getnamefilm()
{
	cout<<"Фильм:"<<this->name<<endl;
}
film::~film()
{
	cout<<"вызывается деструктор фильма"<<endl;
}
