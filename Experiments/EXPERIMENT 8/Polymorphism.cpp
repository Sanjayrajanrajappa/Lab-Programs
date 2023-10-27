#include <iostream> 
using namespace std;
class Shape 
{ 
public: 
    virtual void draw()
    { 
        cout<<"Drawing a Shape...."<<endl; 
    } 
}; 
class Circle : public Shape
{ 
public: 
    void draw() override
    { 
        cout<<"Drawing a Circle...."<<endl; 
    } 
}; 
class Square : public Shape 
{ 
public: 
    void draw() override
    { 
        cout<<"Drawing a Square....."<<endl; 
    } 
}; 
int main() 
{ 
    Shape* shapePtr;  
    Circle circle; 
    Square square; 
    shapePtr = &circle; 
    shapePtr->draw();  
    shapePtr = &square; 
    shapePtr->draw();
    cout<<"\nDone By SANJAY RAJAN R CSE D";
    cout<<"\nREG NO. 23CS210";
    return 0; 
}
