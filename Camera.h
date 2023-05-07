#pragma once

#include "Box.h"
#include <SFML/Graphics.hpp>

class Camera {
public:
    sf::RenderWindow* window;
    Box box;
    float pixels_per_unit;

    Camera(sf::RenderWindow& window, Box box, float pixels_per_unit) {
        this->window = &window;
        this->box = box;
        this->pixels_per_unit = pixels_per_unit;
    }
};