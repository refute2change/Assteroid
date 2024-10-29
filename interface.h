#pragma once

#include <SFML/Graphics.hpp>

class interface
{
private:
    sf::RenderWindow w{sf::VideoMode(800, 800), "Assteroid", sf::Style::Default};
    sf::Event ev;
public:
    void operate();
};