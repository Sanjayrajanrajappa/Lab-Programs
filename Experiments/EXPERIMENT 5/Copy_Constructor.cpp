#include <iostream> 
#include <string> 
using namespace std; 
class Person
{ 
private: 
    string name; 
    int age; 
public: 
    Person(const string& n, int a) : name(n), age(a) {} 
    Person(const Person& other) : name(other.name), age(other.age) {} 
    void display() 
    { 
        cout<<"Name: "<<name<<endl; 
        cout<<"\t  Age: "<<age<<endl; 
    } 
}; 
int main()
{ 
    Person P1("Alice", 21); 
    Person P2 = P1;
    cout<<"Person 1: "; 
    P1.display(); 
    cout<<"Person 2: "; 
    P2.display();
    cout<<"\nDone By SANJAY RAJAN R CSE"; 
    cout<<"\nREG NO. 23CS210";
    return 0; 
}
