#pragma once

#include <string>

enum class Button
{
	Left,
	Right,
};

enum class Key
{
    A, B, C, D, E, F, G, H, I, J, 
	K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z,
    Num0, Num1, Num2, Num3, Num4, 
    Num5, Num6, Num7, Num8, Num9, Escape, 
	LControl, LShift, LAlt, LSystem,    
    RControl, RShift, RAlt, RSystem,    
    Menu, LBracket, RBracket, Semicolon, Comma, 
	Period, Quote, Slash, Backslash, Tilde, 
	Equal, Hyphen, Space, Enter, Backspace,  
    Tab, PageUp, PageDown, End, Home, Insert, Delete,     
    Add, Subtract, Multiply, Divide, Left, Right, Up, Down,       
    Numpad0, Numpad1, Numpad2, Numpad3, Numpad4,      
    Numpad5, Numpad6, Numpad7, Numpad8, Numpad9,      
    F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, F13, F14, F15
};


struct Color
{
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char a = 255;
};

struct Vector2
{
	float x, y;
};

struct IntRect
{
	int x, y, w, h;
};

struct Texture
{
	unsigned int width;
	unsigned int height;
	IntRect src;
};

struct Sprite
{
	const int ID;
	Texture texture;
	Color color;
	Vector2 position;
	Vector2 origin;
	float angle;
	float scale;
};

struct Sound
{
	const int ID;
	float volume;
	float pitch;
	bool looping;
};

class Screen
{
public:
	Screen(unsigned int windowWidth = 1280, unsigned int windowHeight = 720, std::string windowTitle = "");
	~Screen();

	bool IsOpen() const;
	int GetMouseX() const;
	int GetMouseY() const;
	bool IsKeyDown(const Key key) const;
	bool IsButtonDown(const Button button) const;
	int GetWindowWidth() const;
	int GetWindowHeight() const;
	void Clear();
	void SetClearColor(unsigned char r, unsigned char g, unsigned char b);
	void SetClearColor(Color color);
	Sound LoadSound(std::string filePath);
	void PlaySound(const Sound& sound);
	void StopSound(const Sound& sound);
	Sprite LoadSprite(std::string filePath);
	void DrawSprite(const Sprite &sprite);
	void DrawPixel(int x, int y);
	void DrawPixel(int x, int y, Color color);
	void DrawPixel(int x, int y, unsigned char r, unsigned char g, unsigned char b, unsigned char a);
	void DrawRectangle(int x, int y, int width, int height);
	void DrawRectangle(int x, int y, int width, int height, Color color);
	void DrawRectangle(int x, int y, int width, int height, unsigned char r, unsigned char g, unsigned char b, unsigned char a);
	void DrawCircle(int x, int y, int radius);
	void DrawCircle(int x, int y, int radius, Color color);
	void DrawCircle(int x, int y, int radius, unsigned char r, unsigned char g, unsigned char b, unsigned char a);
	void DrawText(int x, int y, unsigned char r, unsigned char g, unsigned char b, unsigned char a, const std::string &text, int text_scale = 2);
	void DrawText(int x, int y, Color color, const std::string &text, int text_scale = 2);
	void Display();
};
