#include <iostream>
using namespace std; 
class Simpleclass 
{ 
public:  
Simpleclass() { 
cout<<"Constructor is called!"<<std::endl; 
} 
~Simpleclass() { 
cout<<"Destructor is called!"<<std::endl;
cout<<"\nDone By SANJAY RAJAN R CSE D";
cout<<"\nREG NO. 23CS210";
} 
}; 
int main() 
{ 
    cout<<"Creating an instance of a Simpleclass..."<<std::endl; 
    Simpleclass obj;
    cout<<"Doing some work with a Simpleclass..."<<std::endl; 
    return 0; 
}
