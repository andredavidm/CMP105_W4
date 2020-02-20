#pragma once
#include "Framework/GameObject.h"
#include <SFML/Graphics.hpp>


class Player :	public GameObject
{
public:
	Player();
	~Player();
	void handleInput();
	void update();
	//if you don't want to have testSprite public, you need to provide access through a public function to level class. 
	GameObject getPlayerSprite();
	sf::Texture texture;

private:
	GameObject testSprite;

};

