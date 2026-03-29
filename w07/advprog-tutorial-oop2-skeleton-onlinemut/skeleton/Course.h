#ifndef COURSE_H
#define COURSE_H

#include <string>

// TODO: Remove CourseType from everywhere after implementing concrete types

class Course {
protected:
  std::string _id;

public:
  Course(std::string);

  std::string id() const;

  virtual std::string type() const = 0;

  // TODO: Add describe()
  virtual void describe() const = 0;

  // TODO: Declare the destructor as virtual (why?)
  virtual ~Course() = default;
};

#endif // COURSE_Η
