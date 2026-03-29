#include <iostream>
#include <string>

#include "Lecture.h"

Lecture::Lecture(std::string id, std::string exam_date)
    : Course(id), _exam_date(exam_date) {
  std::cout << "Constructing the lecture " << _id << std::endl;
}

// TODO: Add describe()

void Lecture::describe() const {
  std::cout << "This course is a lecture. The exam date is: " << _exam_date << ".\n";
}

std::string Lecture::type() const {
  return "Lecture";
}