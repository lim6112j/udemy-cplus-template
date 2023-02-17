#include <iostream>
int Max(int x, int y) {
  return x > y ? x : y;
}
float Max(float x, float y) {
  return x > y ? x : y;
}
int main() {
  auto num = Max(3,8);
  std::cout << num << std::endl;
  auto num2 = Max(3.3f, 5.8f);
  std::cout << num2 << std::endl;
  return 0;
}
