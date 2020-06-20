/*#include "Puck.h"
Puck::Puck() {};
Puck::~Puck() {};*/


#include "Puck.h"

Puck::Puck()
{
	Puck_Pict.loadFromFile("C:/Users/yurin/source/repos/PROJECT_1/Images/images/puck.png");
	Puck1.setTexture(Puck_Pict);
	Puck1.setPosition(330, 540);
}

Puck::~Puck()
{
}