#pragma once
#include "Painter.h"
#include "Point.h"
#include "Velocity.h"

class Ball {
public:
    Ball();
    Ball(
        double x,
        double y,
        double vx,
        double vy,
        double r,
        double red,
        double green,
        double blue,
        bool Collidable,
        bool deth,
        int t
    );
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;
    bool getCollidable();
    void aging();
    int time;
    bool isDeth;
private:
    Color color;
    Point point;
    Velocity my_velocity;
    double radius;
    bool isCollidable;
};
