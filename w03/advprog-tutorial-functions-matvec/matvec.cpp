#include <iostream>
#include <vector>

template <typename T>
void print_vector(const std::vector<T>& v) {
  std::cout << " [ ";
  for (const auto& elem : v) {
    std::cout << elem << " ";
  }
  std::cout << "]" << std::endl;
}

template <typename T>
void print_matrix(const std::vector<std::vector<T>>& A) {
  std::cout << "[" << std::endl;
  for (const auto& row : A) {
    for (const auto& elem : row) {
      std::cout << elem << " ";
    }
    std::cout << std::endl;
  }
  std::cout << "]" << std::endl;
}

std::vector<double> operator* (const std::vector<std::vector<double>>& A, const std::vector<double>& v) {
  const auto N = v.size();
  std::vector<double> res(N, 0.0);
  for (auto i = 0u; i < N; i++) {
    for (auto j = 0u; j < N; j++) {
      res[i] += A[i][j] * v[j];
    }
  }
  return res;
}

int main() {
  std::vector<std::vector<double>> matrix = {{1., 0., 0.}, {0., 1., 0.}, {0., 0., 1.}};

  std::vector<double> vec_a = {1., 2., 3.};

  auto vec_mul = matrix * vec_a;
  print_vector(vec_mul);
}
