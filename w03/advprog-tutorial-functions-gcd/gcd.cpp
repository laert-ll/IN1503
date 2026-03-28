#include <algorithm>

int gcdRecursive(int a, int b) {
  if (b == 0) {
    return a;
  } else {
    return gcdRecursive(b, a % b);
  }
}

int gcdIterative(int a, int b) {
  while (b != 0) {
    int temp = a % b;
    a = b;
    b = temp;
  }
  return a;
}

int gcdIterativeSwap(int a, int b) {
  while (b != 0) {
    a %= b;
    std::swap(a, b);
  }
  return a;
}

int main() {
}
