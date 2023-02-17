#include <iostream>
// int Max(int x, int y) {
//   return x > y ? x : y;
// }
// float Max(float x, float y) {
//   return x > y ? x : y;
// }
template<typename T>
T Max(T x, T y) {
  return x > y ? x : y;
}
template<typename T>
T Add(T x, T y) {
  return x + y;
}
template<typename T>
T ArraySum(T *pArr, int arrSize) {
  int sum = 0;
  for (int i = 0; i < arrSize ; i ++) {
    sum += pArr[i];
  }
  return sum;
} 
template <typename T>
T Max(T *pArr, int arrSize) {
  T maxValue = pArr[0];
  for (int i = 0; i < arrSize; i++) {
    maxValue = maxValue > pArr[i] ? maxValue : pArr[i];
  }
  return maxValue;
}
int main() {
  auto num = Max(3,8);
  std::cout << num << std::endl;
  auto num2 = Max(3.3f, 5.8f);
  std::cout << num2 << std::endl;
  float arr[3] = {1.1, 2.2, 3.3};
  auto num3 = ArraySum(arr, 3);
  std::cout << num3  << std::endl;
  auto num4 = Max(arr, 3);
  std::cout << num4 << std::endl;
  return 0;
}
