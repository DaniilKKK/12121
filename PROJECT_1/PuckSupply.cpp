
/*#include "PuckSupply.h"
#include <iostream>
using namespace std;

PuckSupply::PuckSupply(int healthe) 
{
	_Mass_Puck = new Puck[healthe];
	_kolvoPucks = healthe;
}

PuckSupply::~PuckSupply() 
{
	delete[]_Mass_Puck;
}

Puck PuckSupply::getPuck() 
{
	if (_kolvoPucks > 0) 
	{
		cout << "Kolvo Healthe = " << _kolvoPucks << endl;
		return _Mass_Puck[_kolvoPucks];
	}
	else
	{
		cout << "You lose this game" << endl;
	}
}*/



#include "PuckSupply.h"
#include <iostream>
using namespace std;

PuckSupply::PuckSupply(int HP)
{
	_Puck_arr = new Puck[HP];
	_cnt = HP;
}

PuckSupply::~PuckSupply()
{
	delete[] _Puck_arr;
}

Puck PuckSupply::getPuck()
{
	if (_cnt > 0) {
		cout << "Debug of HP: " << _cnt << endl;
		return _Puck_arr[_cnt = _cnt - 1 ];
	}

	else {
		cout << "You've lost, 0 HP"<< endl;
	}
}