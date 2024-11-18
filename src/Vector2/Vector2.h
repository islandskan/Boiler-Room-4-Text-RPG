#ifndef __VECTOR2_H__
#define __VECTOR2_H__

struct Vector2
{
    int x, y;

    Vector2 operator+(const Vector2 &other);
    Vector2 operator-(const Vector2 &other);
    Vector2 operator*(const double other);
    Vector2 operator/(const double other);
};

#endif