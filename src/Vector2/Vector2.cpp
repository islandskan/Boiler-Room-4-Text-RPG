#include "Vector2.h"
#include <cmath>

Vector2 Vector2::operator+(const Vector2 &other)
{
    return Vector2(x + other.x, y + other.y);
}

Vector2 Vector2::operator-(const Vector2 &other)
{
    return Vector2(x - other.x, y - other.y);
}

Vector2 Vector2::operator*(const double other)
{
    return Vector2(round((double) x * other), round((double) y * other));
}

Vector2 Vector2::operator/(const double other)
{
    return Vector2(round((double) x / other), round((double) y / other));
}
