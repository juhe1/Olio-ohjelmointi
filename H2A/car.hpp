#ifndef CAR_H
#define CAR_H

#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    void setBrand(std::string b); 

    void setModel(std::string m); 

    void setYearModel(int y); 

    void printData(); 
};

#endif // CAR_H
