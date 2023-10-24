#include <iostream>
const double half = 0.5;
class Shape 
{ 
public:
    
    void setDimensions(double length, double width) { 
    length_ = length; 
    width_ = width;
    half_ = half; 
    } 
    virtual double calculateArea() { 
    return half_ * length_ * width_; 
    } 
protected: 
    double length_; 
    double width_;
    double half_;
}; 
class Triangle : public Shape 
{ 
public: 
    double calculateArea() override { 
    return half_ * length_ * width_; 
    } 
};  
int main() 
{ 
Triangle triangle; 
    triangle.setDimensions(15.0, 24.0); 
    std::cout<<"Area of Triangle: "<<triangle.calculateArea()<<std::endl;
    std::cout<<"\nDone By SANJAY RAJAN R CSE D";
    std::cout<<"\nREG NO. 23CS210"; 
    return 0; 
} 
