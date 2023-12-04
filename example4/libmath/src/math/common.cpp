#include "math/common.h"

Vector2<float> Lerp(const Vector2<float> &lhs, const Vector2<float> &rhs,
                    float t) {
  return (lhs * (1 - t)) + (rhs * t);
}
