#include "math/common.h"
#include "math/vec.hpp"
#include <iostream>

int main(int, char **) {
  Vector2<float> v1{0, 0}, v2{10, 10};
  Vector2<float> v3 = Lerp(v1, v2, 0.3f);
  std::cout << v3 << std::endl;
}
