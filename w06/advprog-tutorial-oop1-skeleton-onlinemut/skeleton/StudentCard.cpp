#include "StudentCard.h"

// TODO
StudentCard::StudentCard(Student student)
  : _student_name(student.name) {}

void StudentCard::print() {
  std::cout << "StudentCard: " << _student_name << "\n";
}