#include <iostream>
#include <vector>

void print_vector(const std::vector<int>& v) {
    std::cout << "[ ";
    for (const auto& elem: v) {
      std::cout << v << " ";
    }
    std::cout << " ]";
}

int main() {
    std::vector<int> v;

    while (std::cin >> x) {
      v.push_back(x);
    }

    std::cin.clear();
    std::cin.ignore();

    print_vector(v);

    return 0;
}