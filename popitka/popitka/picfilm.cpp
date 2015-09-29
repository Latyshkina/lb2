#include "stdafx.h"
#include "programm.h"
#include "picfilm.h"
#include <iostream>
#include "rezecer.h"

using namespace std;

 picfilm:: picfilm()
{
	cout<<"Вызывается конструтор художественного фильма"<<endl;
}

void  picfilm::setnamepicfilm(char *name)
{
	this->name=name;
}

void  picfilm::getnamepicfilm()
{
	cout<<"Художествееный фильм:"<<this->name<<endl;
}
picfilm::~picfilm()
{
	cout<<"Вызывается деструктор художественного фильма"<<endl;
}