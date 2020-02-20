#include "Enemy2.h"
#include <iostream>
using namespace std;

Enemy2::Enemy2()
{
	enemy2Texture.loadFromFile("gfx/MushroomTrans.png");
	enemy2Sprite.setTexture(&enemy2Texture);
	enemy2Sprite.setSize(sf::Vector2f(100, 100));
	enemy2Sprite.setPosition(130, 10);

	enemy2Move = { 500,500 };
}

Enemy2::~Enemy2()
{

}

void Enemy2::update(float dt)
{
	enemy2Sprite.move(enemy2Move * dt);


	//boucing
	pos = enemy2Sprite.getPosition();


	if (pos.x >= 1200)
	{

		enemy2Move.x = -500;
	}
	else if (pos.x <= 0)
	{
		enemy2Move.x = 500;
	}

	if (pos.y >= 675)
	{

		enemy2Move.y = -500;
	}
	else if (pos.y <= 0)
	{
		enemy2Move.y = 500;
	}



}