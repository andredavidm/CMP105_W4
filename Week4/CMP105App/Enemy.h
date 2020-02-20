#pragma once
#include "Framework/GameObject.h"
#include <SFML/Graphics.hpp>

class Enemy :
	public GameObject
{
public:
	Enemy();
	~Enemy();

	sf::Vector2f pos;

	GameObject enemySprite;
	sf::Texture enemyTexture;

	sf::Vector2f enemyMove;

	void update(float dt);
};

