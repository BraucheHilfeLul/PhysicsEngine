
#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

#include "Box.h"
#include "Vec2.h"
#include "RigidBody.h"
#include "Hitbox.h"

class Vec2{};
class Box {};
class HitBox {};
class RigidBody {};
class Camera {};

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "MyGame");

    Camera camera(window, Box(Vec2(0.f, 0.f), Vec2(8.f, 6.f)), 100.f);
    Box box(Vec2(3.f, 4.f), Vec2(1.f, 1.f));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear(sf::Color::Black);
        box.draw(camera);
        window.display();
    }

    return 0;
}