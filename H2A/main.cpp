#include <iostream>
#include <memory>
#include <string>
#include "car.hpp"
#include "Rectangle.hpp"
#include "student.hpp"

int main() {
    Car myCar;
    myCar.setBrand("Toyota");
    myCar.setModel("Corolla");
    myCar.setYearModel(2022);
    myCar.printData();

    Rectangle rectangle;
    rectangle.setWidth(5.0);
    rectangle.setHeight(3.0);

	Rectangle* rect = new Rectangle();
	rect->setWidth(5);
	rect->setHeight(10);

	std::cout << "Pinta-ala: " << rect->getArea() << std::endl;
	std::cout << "Ympärysmitta: " << rect->getCircum() << std::endl;

    std::unique_ptr<Student> student = std::make_unique<Student>();
    student->setName("Matti Meikäläinen");
    student->setStudentNumber(12345);
    student->setAverage(4.2);

    std::cout << "Opiskelijan nimi: " << student->getName() << std::endl;
    std::cout << "Opiskelijanumero: " << student->getStudentNumber() << std::endl;
    std::cout << "Keskiarvo: " << student->getAverage() << std::endl;

    return 0;
}
