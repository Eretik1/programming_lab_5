#include "Ball.hpp"
#include <cmath>

Ball::Ball(){};
Ball::Ball(
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
    ){
        point.x = x;
        point.y = y;
        Point vel;
        vel.x = vx;
        vel.y = vy;
        my_velocity.setVector(vel);
        radius = r;
        color = Color(red, green, blue);
        isCollidable = Collidable;
        isDeth = deth;
        time = t;

    };

/**
 * Задает скорость объекта
 * @param velocity новое значение скорости
 */
void Ball::setVelocity(const Velocity& velocity) {
    my_velocity = velocity;
}

/**
 * @return скорость объекта
 */
Velocity Ball::getVelocity() const {
    // TODO: место для доработки
    return my_velocity;
}

/**
 * @brief Выполняет отрисовку объекта
 * @details объект Ball абстрагирован от конкретного
 * способа отображения пикселей на экране. Он "знаком"
 * лишь с интерфейсом, который предоставляет Painter
 * Рисование выполняется путем вызова painter.draw(...)
 * @param painter контекст отрисовки
 */
void Ball::draw(Painter& painter) const {
    painter.draw(point, radius, color);
}

/**
 * Задает координаты центра объекта
 * @param center новый центр объекта
 */
void Ball::setCenter(const Point& center) {
    point = center;
}

/**
 * @return центр объекта
 */
Point Ball::getCenter() const {
    // TODO: место для доработки
    return point;
}

/**
 * @brief Возвращает радиус объекта
 * @details обратите внимание, что метод setRadius()
 * не требуется
 */
double Ball::getRadius() const {
    // TODO: место для доработки
    return radius;
}

/**
 * @brief Возвращает массу объекта
 * @details В нашем приложении считаем, что все шары
 * состоят из одинакового материала с фиксированной
 * плотностью. В этом случае масса в условных единицах
 * эквивалентна объему: PI * radius^3 * 4. / 3.
 */
double Ball::getMass() const {
    // TODO: место для доработки
    return 3.1415 * pow(radius, 3) * 4. / 3;
}

bool Ball::getCollidable(){
    // TODO: место для доработки
    return isCollidable;
}

void Ball::aging(){
    time--; 
}
