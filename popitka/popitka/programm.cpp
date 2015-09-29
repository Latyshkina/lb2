#include "stdafx.h"
#include "programm.h"
#include <iostream>
using namespace std;

programm::programm()
{
	cout<<"Вызывается конструктор тепепрограммы"<<endl;
}
void programm::setname(char *name)
{
	this->name=name;
}
void programm::getname()
{
	cout<<"Название телепрограммы:"<<this->name<<endl;
}

programm::~programm()
{
	cout<<"Вызывается деструктор телепрограммы"<<endl;
}