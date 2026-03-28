#include <iostream>
#include <vector>

void print_vector(const std::vector<int>& v) {
  std::cout << "[ ";
  for (const auto& elem: v) {
    std::cout << elem << " ";
  }
  std::cout << "]";
}

void print_matrix(const std::vector<std::vector<int>>& v) {
  for (const auto& line: v) {
    print_vector(line);
    std::cout << "\n";
  }
}

int main() {
    std::vector<int> v;
    int x;

    std::cout << "Feed me numbers for the vector: \n";
    while (std::cin >> x) {
      v.push_back(x);
    }
    std::cin.clear();
    std::cin.ignore();

    std::cout << "The vector is: \n";
    print_vector(v);
    std::cout << "\n";

    std::vector<std::vector<int>> matrix = {v.size(), v};

    print_matrix(matrix);
    return 0;
}
