/*#pragma once
#include "BrickPile.h"
class Puck
{
public:
	Puck();
	~Puck();

	friend class BrickPile;

private:
	int _coord_x;
	int _coord_y;


	int _size_x;
	int _size_y;

};*/


#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
using namespace std;
class Puck
{
public:

	Puck();
	~Puck();
	int dx_Puck = 0;
	int dy_Puck = 0;
	Sprite Puck1;
	Sprite get() 
	{
		return Puck1;
	}

	void Ball_up() 
	{
		dx_Puck = 3;
		dy_Puck = 2;
		Puck1.move(dx_Puck, 0);
		Puck1.move(0, dy_Puck);
	}

	void move_x() 
	{
		Puck1.move(dx_Puck, 0);
	}

	void move_y() 
	{
		Puck1.move(0, dy_Puck);
	}
	friend class BrickPile;

private:
	int _size_x;
	int _size_y;
	Texture Puck_Pict;
	
	int _pos_x;
	int _pos_y;

};