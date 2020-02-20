#include "Background.h"

Background::Background()
{

	BGTexture.loadFromFile("gfx/Level1_1.png");
	BackgroundTexture.setTexture(&BGTexture);
	BackgroundTexture.setSize(sf::Vector2f(11038, 675));
	BackgroundTexture.setPosition(1,1);



}

Background::~Background()
{
}