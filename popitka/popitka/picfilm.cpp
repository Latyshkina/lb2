#include "stdafx.h"
#include "programm.h"
#include "picfilm.h"
#include <iostream>
#include "rezecer.h"

using namespace std;

 picfilm:: picfilm()
{
	cout<<"���������� ���������� ��������������� ������"<<endl;
}

void  picfilm::setnamepicfilm(char *name)
{
	this->name=name;
}

void  picfilm::getnamepicfilm()
{
	cout<<"�������������� �����:"<<this->name<<endl;
}
picfilm::~picfilm()
{
	cout<<"���������� ���������� ��������������� ������"<<endl;
}