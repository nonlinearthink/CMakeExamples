#include "math/vec.hpp"
#include <cassert>

int main() {
  Vector2<int> v1{1, 2}, v2{3, 4};
  Vector2<int> v3 = v1 + v2;
  assert(v3.x == 4);
  assert(v3.y == 6);
  return 0;
}
