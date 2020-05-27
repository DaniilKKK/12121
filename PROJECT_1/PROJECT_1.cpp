
#include <iostream>
#include "Brick.h"
#include "BrickPile.h"
#include "Puck.h"
#include "PuckSupply.h"
#include <SFML/Graphics.hpp>

using namespace sf;
using namespace std;

int main()
{
	BrickPile Bricks;
	PuckSupply Pucks(3);
	Pucks.getPuck();
	Pucks.getPuck();
	Pucks.getPuck();

	return 0;
}