#include <iostream>
using namespace std; 
class Simpleclass 
{ 
public:  
    Simpleclass() 
    { 
        cout<<"Constructor is called!"<<endl; 
    } 
    ~Simpleclass() 
    { 
        cout<<"Destructor is called!"<<endl;
        cout<<"\nDone By SANJAY RAJAN R CSE D";
        cout<<"\nREG NO. 23CS210";
    } 
}; 
int main() 
{ 
    cout<<"Creating an instance of a Simpleclass..."<<endl; 
    Simpleclass obj;
    cout<<"Doing some work with a Simpleclass..."<<endl; 
    return 0; 
}
