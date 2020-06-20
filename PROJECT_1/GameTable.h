#pragma once
#include <SFML/Graphics.hpp>
#include "BrickPile.h"
#include "PuckSupply.h"
#include <iostream>
#include "Pandlle.h"
/*#include "PuckSupply.h"
#include "Pandlle.h"*/
using namespace sf;
class GameTable
{
public:
	GameTable();
	~GameTable();

	
private:

};
void menu(RenderWindow & window);
void StartGame();
void GameWin();
void GameLose();
