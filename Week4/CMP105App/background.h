#pragma once
#include "Framework/GameObject.h"

class Background :
	public GameObject
{
public:
	GameObject BackgroundTexture;
	sf::Texture BGTexture;

	Background();
	~Background();
};

