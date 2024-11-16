#pragma once
#include "Point.h"
#include "Ball.hpp"
#include <vector>

class Dust {
    public:
        Dust(Point center);
        std::vector<Ball> getBalls();
        int time;
    private:
        std::vector<Ball> balls;
};