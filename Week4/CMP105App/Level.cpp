#include "Level.h"
#include <iostream>
using namespace std;

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	/*texture.loadFromFile("gfx/Mushroom.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);
	*/

	window->setMouseCursorVisible(false);
	myPlayer.setInput(input);
	myMouse.setInput(input);
	view = window->getView();
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
	myPlayer.handleInput(dt);


	if (input->isKeyDown(sf::Keyboard::Space))
	{
		view.move(100.0f, 0);
		window->setView(view);
	}
}

// Update game objects
void Level::update(float dt)
{
	myEnemy.update(dt);
	myEnemy2.update(dt);
	myMouse.update(dt);

	
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(myBackgroundTexture.BackgroundTexture);
	window->draw(myPlayer.getPlayerSprite());
	window->draw(myEnemy.enemySprite);
	window->draw(myEnemy2.enemy2Sprite);
	window->draw(myMouse.mouseSprite);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}