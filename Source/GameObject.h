#pragma once
#include "screen.h"
#include <iostream>


class GameObject {
protected:
	int m_size;
	Color m_color;
	Screen& m_screen;
	std::string m_name;
	
struct Vector2
{
	int m_x, m_y;
};
Vector2 position;
	virtual void setColor(unsigned char r, unsigned char g, unsigned char b) { m_color = { r,g,b }; };

public:
	GameObject(Screen& screen) : m_screen(screen), m_color({ 255,255,255 }) {
		m_size = 50;
		std::cout << "GameObject created" << std::endl;
		position.m_x = 50;
		position.m_y = 50;
	};
	virtual void Update() = 0;
	virtual void Render() = 0;
	virtual int getX() = 0;
	virtual int getY() = 0;
	virtual std::string getName() = 0;

};