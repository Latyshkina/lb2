#include "stdafx.h"
#include "rezecer.h"
#include <iostream>
using namespace std;

rezecer::rezecer()
{
	cout<<"���������� ����������� ��������"<<endl;
}
void rezecer::setnamee(char *name)
{
	this->name=name;
}
void rezecer::getnamee()
{
	cout<<"������� ��������:"<<this->name<<endl;
}

rezecer::~rezecer()
{
	cout<<"���������� ���������� ��������"<<endl;
}