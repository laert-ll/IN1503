#include <iostream>
#include <Eigen/Dense>

int main() {
  Eigen::Matrix3d matrixA(3, 3);
  
  matrixA << 1, 0, 0, 
            0, 1, 0, 
            0, 0, 1;

  std::cout << "Matrix: \n" << matrixA << std::endl;

  Eigen::Vector3d vec_a(3);
  vec_a << 1, 2, 3;
  std::cout << "vec_a: \n" << vec_a << std::endl;

  Eigen::Vector3d vec_b(3);
  vec_b << 4, 5, 6;
  std::cout << "vec_b: \n" << vec_b << std::endl;

  auto vec_sum = vec_a + vec_b;
  std::cout << "vec_sum: \n" << vec_sum << std::endl;

  auto mat_vec_mul = matrixA * vec_a;
  std::cout << "mat_vec_mul\n" << mat_vec_mul << std::endl;

}
