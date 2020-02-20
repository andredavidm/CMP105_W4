#include "Player.h"


Player::Player()
{
	texture.loadFromFile("gfx/Mushroom.png");
	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);
}

Player::~Player() 
{


}

GameObject  Player::getPlayerSprite() {
	return testSprite;
}

void handlnput()
{

	/*if (input->isKeyDown(sf::Keyboard::A)
	{
		move.testSprite(200,200);
	}

	*/
}