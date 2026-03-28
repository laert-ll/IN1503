#include <iostream>

double multiply(double a, double b)
{
  return a * b;
}

double divide(double a, double b)
{
  if (b != 0)
    return a / b;
  else
    return 0;
}

int main(int argc, char *argv[])
{
  double a = 4;
  double b = 2;
  double mul = multiply(a, b);
  double div = divide(a, b);
  std::cout << "The value is " << mul << "\n";
  std::cout << "The value is " << div << "\n";
  return 0;
}
