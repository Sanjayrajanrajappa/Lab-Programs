#include <iostream> 
#include <string> 
using namespace std; 
class Person
{ 
private: 
    string name; 
    int age; 
    public: 
        Person(const std::string& n, int a) : name(n), age(a) {} 
        Person(const Person& other) : name(other.name), age(other.age) {} 
        void display() { 
            std::cout<<"Name: "<<name<<", Age: "<<age<<std::endl; 
        } 
}; 
int main() 
{ 
    Person person1("Alice", 30); 
    Person person2 = person1;
    std::cout<<"Person 1: "; 
    person1.display(); 
    std::cout<<"Person 2: "; 
    person2.display();
    cout<<"\nDone By SANJAY RAJAN R CSE D";
    cout<<"\nREG NO. 23CS210";
    return 0; 
} 
