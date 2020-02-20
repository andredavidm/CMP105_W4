#include "Player.h"


Player::Player()
{
	texture.loadFromFile("gfx/Mushroom.png");
	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(300, 300);
	

	
	
	moveRight = { -200, 0 };
	moveLeft = { 200, 0 };
	moveUp = { 0, -200 };
	moveDown = { 0, 200 };
}

Player::~Player() 
{


}

GameObject  Player::getPlayerSprite() {
	return testSprite;
}

void Player::handleInput(float dt)
{

	if (input->isKeyDown(sf::Keyboard::A))
	{
		testSprite.move((moveRight*dt));
	}
	else if (input->isKeyDown(sf::Keyboard::D))
	{
		testSprite.move((moveLeft * dt));
	}
	if (input->isKeyDown(sf::Keyboard::W))
	{
		testSprite.move((moveUp * dt));
	}
	else if (input->isKeyDown(sf::Keyboard::S))
	{
		testSprite.move((moveDown * dt));
	}






}
