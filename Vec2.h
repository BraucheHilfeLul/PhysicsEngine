#pragma once

class Vec2 {
public:
    float x;
    float y;
    Vec2() {}
    explicit Vec2(float x, float y) {
        this->x = x;
        this->y = y;
    }
};