// popitka.cpp: определяет точку входа для консольного приложения.
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
	a.setname("НТВ");
	a.getname();
	cout<<endl;

	film b;
	b.setname("Онт");
	b.getname();
	b.setnamefilm("Мстители");
	b.getnamefilm();
	b.setnamee("Уидон");
	b.getnamee();
	cout<<endl;

	picfilm c;
	c.setname("ВТВ");
	c.getname();
	c.setnamepicfilm("Один день");
	c.getnamepicfilm();
	c.setnamee("Шерфиг");
	c.getnamee();
	cout<<endl;

	advertising d;
	d.setadvertising(60);
	d.getadvertising();
	d.setnamee("Тарантино");
	d.getnamee();
	cout<<endl;

	cartoon e;
	e.setname("SonySfi");
	e.getname();
	e.setnamecartoon("Гадкий я");
	e.getnamecartoon();
	e.setnamee("Коффан");
	e.getnamee();
	cout<<endl;
	 return 0;

}

