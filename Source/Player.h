#pragma once
#include "GameObject.h"
#include <iostream>
#include <math.h>
class Player : GameObject
{
	float speed;
	float angle;

	Sprite m_sprite = m_screen.LoadSprite("assets/Player.png");
public:
	Player(Screen& screen);
	~Player();

	void Update() override;
	void Render() override;
	void input();
	int getX() override;
	int getY() override;
	std::string getName() override;

};

