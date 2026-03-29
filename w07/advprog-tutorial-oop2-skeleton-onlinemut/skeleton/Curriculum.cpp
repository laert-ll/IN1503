#include "Curriculum.h"
#include "Course.h"
#include "Lecture.h"
#include "Practical.h"
#include <algorithm>
#include <iostream>
#include <memory>
#include <vector>

// TODO: Implement the constructor

Curriculum::Curriculum() {
  _available_courses.push_back(std::make_shared<Lecture>("IN1503", "30.03.2026"));
  _available_courses.push_back(std::make_shared<Practical>("IN4229", 5));
  print_courses();
}

// TODO: Implement print_courses()

void Curriculum::print_courses() const {
  for (auto const& course : _available_courses) {
    course->describe();
  }
}

// TODO: Implement request(std::string id) (the linker will complain till you do that)

std::shared_ptr<const Course> Curriculum::request(std::string id) const {
  for (auto const& course : _available_courses) {
    if (course->id() == id) {
      return course;
    }
  }
  throw(std::runtime_error("Course not found."));
}