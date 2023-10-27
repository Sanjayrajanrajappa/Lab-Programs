#include <iostream> 
class Mathoperations 
{ 
public: 
    int add(int a,int b) { 
    return a+b; } 
    double add(double a,double b) { 
    return a+b; } 
    std::string add(const std::string& str1, const std::string& str2) { 
    return str1+str2; } 
};
int main() 
{ 
    Mathoperations math; 
    int result1 = math.add(5, 7); 
    std::cout<<"Result of adding integers: "<<result1<<std::endl; 
    double result2 = math.add(3.14, 2.71); 
    std::cout<<"Result of adding doubles: "<<result2<<std::endl;  
    std::string result3 = math.add("Hello, ", "world!"); 
    std::cout<<"Result of string concatenation: "<<result3<<std::endl; 
    std::cout<<"\nDone By SANJAY RAJAN R CSE D";
    std::cout<<"\nREG NO. 23CS210";
    return 0; 
} 
