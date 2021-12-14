#pragma once
#include "screen.h"
#include "Player.h"

class Asteroids
{

	Screen m_screen;
	Player m_player =  Player(m_screen);

	void Render();
	void Update();

	void onCollision();
	
public:
	Asteroids(Screen& screen);
	~Asteroids();

	void GameStart(Screen& screen);

};