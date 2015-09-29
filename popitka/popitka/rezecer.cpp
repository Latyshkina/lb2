#include "stdafx.h"
#include "rezecer.h"
#include <iostream>
using namespace std;

rezecer::rezecer()
{
	cout<<"Вызывается конструктор режиссёра"<<endl;
}
void rezecer::setnamee(char *name)
{
	this->name=name;
}
void rezecer::getnamee()
{
	cout<<"Фамилия режиссёра:"<<this->name<<endl;
}

rezecer::~rezecer()
{
	cout<<"Вызывается деструктор режиссёра"<<endl;
}