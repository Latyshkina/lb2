#include "stdafx.h"
#include "programm.h"
#include <iostream>
using namespace std;

programm::programm()
{
	cout<<"���������� ����������� �������������"<<endl;
}
void programm::setname(char *name)
{
	this->name=name;
}
void programm::getname()
{
	cout<<"�������� �������������:"<<this->name<<endl;
}

programm::~programm()
{
	cout<<"���������� ���������� �������������"<<endl;
}