// popitka.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "film.h"
#include "picfilm.h"
#include "programm.h"
#include "rezecer.h"
#include "advertising.h"
#include "cartoon.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	
	programm a;
	a.setname("���");
	a.getname();
	cout<<endl;

	film b;
	b.setname("���");
	b.getname();
	b.setnamefilm("��������");
	b.getnamefilm();
	b.setnamee("�����");
	b.getnamee();
	cout<<endl;

	picfilm c;
	c.setname("���");
	c.getname();
	c.setnamepicfilm("���� ����");
	c.getnamepicfilm();
	c.setnamee("������");
	c.getnamee();
	cout<<endl;

	advertising d;
	d.setadvertising(60);
	d.getadvertising();
	d.setnamee("���������");
	d.getnamee();
	cout<<endl;

	cartoon e;
	e.setname("SonySfi");
	e.getname();
	e.setnamecartoon("������ �");
	e.getnamecartoon();
	e.setnamee("������");
	e.getnamee();
	cout<<endl;
	 return 0;

}

