#include "Mouse.h"
#include <iostream>
using namespace std;

Mouse::Mouse()
{

	mouseTexture.loadFromFile("gfx/icon.png");
	mouseSprite.setTexture(&mouseTexture);
	mouseSprite.setSize(sf::Vector2f(10, 10));
	mouseSprite.setPosition(1,1);

	
}
Mouse::~Mouse()
{

}

void Mouse::update(float dt)
{
	mousePos = sf::Vector2f(input->getMouseX(),input->getMouseY());
	
	
	mouseSprite.setPosition(mousePos);
}