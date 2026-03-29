#include "Course.h"
#include <iostream>

// TODO
Course::Course(std::string course_id, CourseType courseType)
  : course_id(course_id), courseType(courseType) {}

std::string Course::get_id() const {
  return course_id;
}