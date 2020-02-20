#pragma once
#include "Framework/GameObject.h"
#include <SFML/Graphics.hpp>


class Player :	public GameObject
{
public:
	Player();
	~Player();
	
	void handleInput(float dt);
	//void update();
	//if you don't want to have testSprite public, you need to provide access through a public function to level class. 
	GameObject getPlayerSprite();
	sf::Texture texture;
	
	sf::Vector2f moveUp;
	sf::Vector2f moveDown;
	sf::Vector2f moveLeft;
	sf::Vector2f moveRight;

	

private:
	GameObject testSprite;

};

