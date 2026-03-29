#ifndef STUDENTCARD_H
#define STUDENTCARD_Η

#include <iostream>
#include <string>

#include "Student.h"

class StudentCard {
  // TODO
  private:

  std::string _student_name;

  public:

  StudentCard(Student);

  std::string get_name();

  void print();
};

#endif