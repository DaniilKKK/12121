/*#pragma once
#include "Puck.h"
class PuckSupply
{
public:
	PuckSupply(int healthe);
	Puck getPuck();
	~PuckSupply();
private:
	Puck *_Mass_Puck;
	int _kolvoPucks;
};*/
#pragma once
#include "Puck.h"

class PuckSupply
{
public:
	PuckSupply(int HP);
	Puck getPuck();
	~PuckSupply();

private:
	Puck *_Puck_arr;
	int _cnt;
};
