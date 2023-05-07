#pragma once

#include "Vec2.h"
#include "Camera.h"
#include <SFML/Graphics.hpp>


class Box {
public:
    Vec2 size;
    Vec2 pos;
    sf::RectangleShape shape;

    Box() {}

    explicit Box(Vec2 size, Vec2 pos) {
        this->size = size;
        this->pos = pos;
        shape.setFillColor(sf::Color::White);
    }

    void draw(Camera camera) {
        shape.setSize(sf::Vector2f(
            size.x * camera.pixels_per_unit,
            size.y * camera.pixels_per_unit
        ));
        shape.setPosition(sf::Vector2f(
            (pos.x - camera.box.pos.x) * camera.pixels_per_unit,
            (pos.y - camera.box.pos.y) * camera.pixels_per_unit
        ));
        (*camera.window).draw(shape);
    }
};