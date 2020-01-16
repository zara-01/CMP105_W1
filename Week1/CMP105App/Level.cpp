#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects

	// rectangle 
	rect.setSize(sf::Vector2f(100, 60));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	rectblue.setSize(sf::Vector2f(75, 55));
	rectblue.setPosition(95, 95);
	rectblue.setFillColor(sf::Color::Blue);

	// circle
	circle.setRadius(50);
	circle.setPosition(600, 337);
	circle.setFillColor(sf::Color::Blue);
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(2.f);

	// font

	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "Error loading font\n";

	}

	text.setFont(font);
	text.setString("Hello World");
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Red);

}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(text);
	window->draw(rect);
	window->draw(rectblue);
	window->draw(circle);
	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}