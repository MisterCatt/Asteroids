#include "Asteroids.h"

void Asteroids::Render()
{
	m_player.Render();
}

void Asteroids::Update()
{
	m_player.Update();
}

void Asteroids::onCollision()
{
}

Asteroids::Asteroids(Screen& screen)
{
	m_screen = screen;
}

Asteroids::~Asteroids()
{
}

void Asteroids::GameStart(Screen& screen)
{
	Render();
	Update();
}
