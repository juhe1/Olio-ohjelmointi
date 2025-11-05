#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle();
    void setWidth(double w);
    void setHeight(double h);
    double getArea() const;
    double getCircum() const;
};

#endif // RECTANGLE_HPP
