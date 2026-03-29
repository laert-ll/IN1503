#include <iostream>
#include <string>

#include "Practical.h"

// TODO: Implement constructor and describe()

Practical::Practical(std::string id, std::size_t num_worksheets)
    : Course(id), _num_worksheets(num_worksheets) {
  std::cout << "Constructing the practical " << _id << std::endl;
}

void Practical::describe() const {
  std::cout << "This course is a Practical. The number of sheets is: " << _num_worksheets << ".\n";
}

std::string Practical::type() const {
  return "Practical";
}