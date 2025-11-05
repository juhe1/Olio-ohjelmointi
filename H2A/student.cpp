#include "student.hpp"

Student::Student() {}

Student::Student(std::string name, int studentNumber, double average)
    : name(name), studentNumber(studentNumber), average(average) {}

void Student::setName(std::string name) {
    this->name = name;
}

void Student::setStudentNumber(int studentNumber) {
    this->studentNumber = studentNumber;
}

void Student::setAverage(double average) {
    this->average = average;
}

std::string Student::getName() const {
    return name;
}

int Student::getStudentNumber() const {
    return studentNumber;
}

double Student::getAverage() const {
    return average;
}
