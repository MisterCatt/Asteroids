#include "Player.h"

Player::Player(Screen& screen) : GameObject(screen)
{
	speed = 0;
	angle = 0;
}

Player::~Player()
{
}

void Player::Update()
{
	input();
	
}

void Player::Render()
{
	m_screen.DrawSprite(m_sprite);
}

void Player::input() {
	if (m_screen.IsKeyDown(Key::W)) {
		m_sprite.position.x = sin(m_sprite.angle * 3.14f / 180.0f);
		m_sprite.position.y = cos(m_sprite.angle * 3.14f / 180.0f);
		speed+=0.2f;
	}
	if (m_screen.IsKeyDown(Key::A)) {
		m_sprite.angle--;
	}
	if (m_screen.IsKeyDown(Key::D)) {
		m_sprite.angle++;
	}
	if (m_screen.IsKeyDown(Key::S)) {
		if (speed <= 0)
			return;
		speed-=0.2f;

	}
}

int Player::getX()
{
	return 0;
}

int Player::getY()
{
	return 0;
}

std::string Player::getName()
{
	return std::string();
}
