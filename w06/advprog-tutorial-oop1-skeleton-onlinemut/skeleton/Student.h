#ifndef STUDENT_H
#define STUDENT_H

#include "Course.h"
#include <string>
#include <vector>

class Student {
  // TODO
private:
  std::string name;
  const std::string matr_nr;
  std::vector<Course> courses;

  friend class StudentCard;

public:
  Student(std::string, std::string);

  void register_for(Course);

  void list_courses() const;

};

#endif // STUDENT_H