#include "Student.h"
#include <iostream>
#include <string>
#include <vector>

// TODO

Student::Student(std::string name, std::string matr_nr)
  : name(name), matr_nr(matr_nr) {}

void Student::register_for(Course course) {
  courses.push_back(course);
}

void Student::list_courses() const {
  std::cout << name << " is registered for the following courses: \n";
  for (const auto& course : courses) {
    std::cout << course.get_id() << "\n";
  }
}