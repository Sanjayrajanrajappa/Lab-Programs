#include <iostream> 
class Shape 
{ 
public: 
    void setDimensions(double length, double width) { 
    length_ = length; 
    width_ = width; 
    } 
    virtual double calculateArea() { 
    return length_ * width_; 
    } 
protected: 
    double length_; 
    double width_; 
}; 
class Rectangle : public Shape 
{ 
public: 
    double calculateArea() override { 
    return length_ * width_; // Same as base class for demonstration 
    } 
};  
int main() 
{ 
    Rectangle rectangle; 
    rectangle.setDimensions(15.0, 24.0); 
    std::cout << "Area of Rectangle: " << rectangle.calculateArea() << std::endl;
    std::cout<<"\nDone By SANJAY RAJAN R CSE D";
    std::cout<<"\nREG NO. 23CS210"; 
    return 0; 
} 
