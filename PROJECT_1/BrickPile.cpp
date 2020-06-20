
/*#include "BrickPile.h"
#include <SFML/Graphics.hpp>

using namespace sf;

BrickPile::BrickPile()
{
	_Sklad_Bricks = new Brick[_kolvoBricks];

	RenderWindow app(VideoMode(535, 400), "Travkanoid!");
	app.setFramerateLimit(60);

	Texture brick, BG, paddle, puck;

	brick.loadFromFile("C:/Users/Alex/source/repos/Arcanoid_Project/Arcanoid_Project/images/brick_2.png");
	BG.loadFromFile("C:/Users/Alex/source/repos/Arcanoid_Project/Arcanoid_Project/images/background.jpg");
	paddle.loadFromFile("C:/Users/Alex/source/repos/Arcanoid_Project/Arcanoid_Project/images/paddle.png");
	puck.loadFromFile("C:/Users/Alex/source/repos/Arcanoid_Project/Arcanoid_Project/images/puck.png");

	Sprite Puck(puck);
	Sprite Paddle(paddle);
	Sprite background(BG);
	Sprite block[1000];

	Puck.setPosition(265, 340);
	Paddle.setPosition(240, 380);

	int n = 0;
	for (int i = 1; i <= _bricks_x; i++) {
		for (int j = 1; j <= _bricks_y; j++) {
			block[n].setTexture(brick);
			block[n].setPosition(i * 45, j * 20);
			n++;
		}
	}

	while (app.isOpen()) {
		Event e;
		while (app.pollEvent(e)) {
			if (e.type == Event::Closed) {
				app.close();
			}
		}

		app.clear();
		app.draw(background);
		app.draw(Puck);
		app.draw(Paddle);

		for (int i = 0; i < n; i++) {
			app.draw(block[i]);
		}

		app.display();
	}
}

BrickPile::~BrickPile()
{
	delete[] _Sklad_Bricks;
}
void BrickPile::brick_destroy(Puck shaiba)
{
	for (int i = 0; i < _kolvoBricks; i++)
	{
		if (shaiba._coord_x == _Sklad_Bricks[i]._coord_x1 || shaiba._coord_y == _Sklad_Bricks[i]._coord_y1)
		{
			delete &_Sklad_Bricks[i];
		}
	}
}*/




#include "BrickPile.h"
#include <SFML/Graphics.hpp>
#include "Brick.h"


using namespace sf;

BrickPile::BrickPile()
{
	_Brick_Pile = new Brick[_amount];
	
	Texture brick;
	/*int n = 0;*/
	for (int i = 1; i <= _bricks_x; i++) {
		for (int j = 2; j <= _bricks_y + 1; j++) {
			block[n].setTexture(_Brick_Pile[n].Brick_Pict);
			block[n].setPosition(i * 63, j * 35);
			n++;
		}
	}

	/*RenderWindow app(VideoMode(535, 400), "_____________");
	app.setFramerateLimit(60);

	Texture brick, BG, paddle, puck;

	brick.loadFromFile("C:/Users/yurin/source/repos/PROJECT_1/Images/images/brick_2.png");
	BG.loadFromFile("C:/Users/yurin/source/repos/PROJECT_1/Images/images/background.jpg");
	paddle.loadFromFile("C:/Users/yurin/source/repos/PROJECT_1/Images/images/paddle.png");
	puck.loadFromFile("C:/Users/yurin/source/repos/PROJECT_1/Images/images/puck.png");

	Sprite Puck(puck);
	Sprite Paddle(paddle);
	Sprite background(BG);
	Sprite block[1000];

	Puck.setPosition(265, 340);
	Paddle.setPosition(240, 380);
	
	int n = 0;
	for (int i = 1; i <= _bricks_x; i++) {
		for (int j = 1; j <= _bricks_y; j++) {
			block[n].setTexture(brick);
			block[n].setPosition(i * 45, j * 20);
			n++;
		}
	}

	while (app.isOpen()) {
		Event e;
		while (app.pollEvent(e)) {
			if (e.type == Event::Closed) {
				app.close();
			}
		}

		app.clear();
		app.draw(background);
		app.draw(Puck);
		app.draw(Paddle);

		for (int i = 0; i < n; i++) {
			app.draw(block[i]);
		}

		app.display();
	}*/
}

BrickPile::~BrickPile()
{
	delete[] _Brick_Pile;
}



void BrickPile::Destroy(Puck p) {
	for (int i = 0; i < _amount; i++) {
		if (p._pos_x == _Brick_Pile[i]._pos_x || p._pos_y == _Brick_Pile[i]._pos_y) {
			delete &_Brick_Pile[i];
		}
	}
}