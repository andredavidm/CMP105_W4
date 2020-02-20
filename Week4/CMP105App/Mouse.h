#pragma once
#include "Framework/GameObject.h"
#include <SFML/Graphics.hpp>


class Mouse :
	public GameObject
{
public:
	Mouse();
	~Mouse();

	GameObject mouseSprite;
	sf::Texture mouseTexture;
	sf::Vector2f mousePos;


	void update(float dt);
	
};

