#include "Dust.h"
#include "Ball.hpp"

Dust::Dust(Point center){
    int col = rand() % 10 + 1;
    for(int i = 0; i < col; i++){
        Ball ball(center.x, center.y, 
        rand() % (500 - (-500) + 1) + (-500), rand() % (500 - (-500) + 1) + (-500), 
        rand() % (20 - 10 + 1) + 10,
        0.98, 0.83, 0.2, 0, 1,
        rand() % (700 - 200 + 1) + 200);
        balls.push_back(ball);
    }
    time = 5;
}

std::vector<Ball> Dust::getBalls(){
    return balls;
}