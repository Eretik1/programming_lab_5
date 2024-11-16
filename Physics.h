#pragma once
#include "Ball.hpp"
#include "Dust.h"
#include <vector>

class Physics {
  public:
    Physics(double timePerTick = 0.001);
    void setWorldBox(const Point& topLeft, const Point& bottomRight);
    void update(std::vector<Ball>& balls, size_t ticks, std::vector<Ball> &dusts) const;

  private:
    void collideBalls(std::vector<Ball>& balls, std::vector<Ball>& dusts) const;
    void collideWithBox(std::vector<Ball>& balls, std::vector<Ball>& dusts) const;
    void move(std::vector<Ball>& balls, std::vector<Ball>& dusts) const;
    void processCollision(Ball& a, Ball& b,
                          double distanceBetweenCenters2) const;

  private:
    Point topLeft;
    Point bottomRight;
    double timePerTick;
};
