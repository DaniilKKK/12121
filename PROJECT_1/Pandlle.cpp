#include "Pandlle.h"
Pandlle::Pandlle() 
{
	Pandlle_Pict.loadFromFile("C:/Users/yurin/source/repos/PROJECT_1/Images/images/paddle.png");
	Paddle1.setTexture(Pandlle_Pict);
	Paddle1.setPosition(300, 580);

};
Pandlle::~Pandlle() {};

