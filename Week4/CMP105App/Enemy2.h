#pragma once
#include "Framework/GameObject.h"
#include <SFML/Graphics.hpp>

class Enemy2 :
	public GameObject
{
public:
	Enemy2();
	~Enemy2();

	sf::Vector2f pos;

	GameObject enemy2Sprite;
	sf::Texture enemy2Texture;

	sf::Vector2f enemy2Move;

	void update(float dt);
};