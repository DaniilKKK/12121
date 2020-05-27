/*#pragma once
#include "Puck.h"
#include "Brick.h"
#include <vector>

class BrickPile
{
public:
	BrickPile();
	~BrickPile();


void brick_destroy(Puck shaiba);
private: 
	Brick *_Sklad_Bricks;
	int _kolvoBricks = 10;
	int _bricks_x = 10;
	int _bricks_y = 5;
};*/
#pragma once
#include "Brick.h"
#include <vector>
#include "Puck.h"

class BrickPile
{
public:
	BrickPile();
	~BrickPile();

	void Destroy(Puck p);

private:
	Brick *_Brick_Pile;
	int _amount = 50; //Пока фиксированное количество кирпичей
	int _bricks_x = 10;
	int _bricks_y = 5;
};
