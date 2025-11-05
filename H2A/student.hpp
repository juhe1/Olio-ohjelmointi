#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student {
private:
    std::string name;
    int studentNumber;
    double average;

public:
    Student();
    Student(const std::string name, int studentNumber, double average);

    void setName(std::string name);
    void setStudentNumber(int studentNumber);
    void setAverage(double average);

    std::string getName() const;
    int getStudentNumber() const;
    double getAverage() const;
};

#endif // STUDENT_HPP
