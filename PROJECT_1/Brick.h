/*#pragma once
class Brick
{
public:
	Brick();
	~Brick();

	friend class BrickPile;
private:
	int _coord_x1;
	int _coord_y1;


	int _size_x;
	int _size_y;
};*/

#pragma once
//#include "BrickPile.h"
#include <SFML/Graphics.hpp>
using namespace sf;

class Brick
{
public:
	Brick();
	~Brick();

	friend class BrickPile;
	friend class GameTAble;
private:
	int _size_x;
	int _size_y;

	int _pos_x;
	int _pos_y;


	Texture Brick_Pict;
};