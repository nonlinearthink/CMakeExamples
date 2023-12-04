#pragma once

#include <cmath>
#include <cstddef>
#include <ostream>

template <typename T> class Vector2 {
public:
  T x, y;

  Vector2<T>() : x(), y() {}
  Vector2<T>(T _x, T _y) : x(_x), y(_y) {}

  T operator[](size_t n) const;
  inline Vector2<T> operator+(const Vector2<T> &rhs) const;
  inline Vector2<T> operator-(const Vector2<T> &rhs) const;
  inline Vector2<T> operator*(const Vector2<T> &rhs) const;
  inline Vector2<T> operator*(const T k) const;

  friend std::ostream &operator<<(std::ostream &os, const Vector2<T> &vec) {
    return os << "Vector2(" << vec.x << ", " << vec.y << ")";
  }
};

template <typename T> T Vector2<T>::operator[](size_t n) const {
  if (n == 1) {
    return y;
  } else {
    return x;
  }
}

template <typename T>
inline Vector2<T> Vector2<T>::operator+(const Vector2<T> &rhs) const {
  return Vector2(x + rhs.x, y + rhs.y);
};

template <typename T>
inline Vector2<T> Vector2<T>::operator-(const Vector2<T> &rhs) const {
  return Vector2(x - rhs.x, y - rhs.y);
};

template <typename T>
inline Vector2<T> Vector2<T>::operator*(const Vector2<T> &rhs) const {
  return Vector2(x * rhs.x, y * rhs.y);
};

template <typename T> inline Vector2<T> Vector2<T>::operator*(const T k) const {
  return Vector2(x * k, y * k);
};
