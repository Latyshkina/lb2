#include "stdafx.h"
#include "film.h"
#include "programm.h"
#include "rezecer.h"
#include <iostream>

using namespace std;

film::film()
{
	cout<<"���������� ����������� ������"<<endl;
}

void film::setnamefilm(char *name)
{
	this->name=name;
}

void film::getnamefilm()
{
	cout<<"�����:"<<this->name<<endl;
}
film::~film()
{
	cout<<"���������� ���������� ������"<<endl;
}
