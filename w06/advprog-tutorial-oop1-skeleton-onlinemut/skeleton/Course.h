#ifndef COURSE_H
#define COURSE_H

#include <string>

// TODO
enum class CourseType {
  Lecture,
  Seminar,
  Practical
};

class Course {
  // TODO
  private:
  std::string course_id;
  CourseType courseType;

  public:
  Course(std::string, CourseType);
  std::string get_id() const;

};

#endif // COURSE_Η