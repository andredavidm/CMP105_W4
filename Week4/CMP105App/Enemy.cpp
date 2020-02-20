#include "Enemy.h"
#include <iostream>
using namespace std;

Enemy::Enemy()
{
	enemyTexture.loadFromFile("gfx/goomba.png");
	enemySprite.setTexture(&enemyTexture);
	enemySprite.setSize(sf::Vector2f(100, 100));
	enemySprite.setPosition(300, 300);

	enemyMove = { 500,500 };
}

Enemy::~Enemy()
{

}

void Enemy::update(float dt)
{
	enemySprite.move( enemyMove * dt);


	//boucing
	pos = enemySprite.getPosition();

	
	if (pos.x >= 1200)
	{

		enemyMove.x = -500 ;
	}
	else if (pos.x <= 0)
	{
		enemyMove.x = 500;
	}
	
	if (pos.y >= 675)
	{

		enemyMove.y = -500 ;
	}
	else if (pos.y <= 0)
	{
		enemyMove.y = 500 ;
	}



}