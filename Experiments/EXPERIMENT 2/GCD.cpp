#include <iostream>
using namespace std;
int main()
{
    int num1,num2,gcd;
    cout<<"Enter Number 1 : ";
    cin>>num1;
    cout<<"Enter Number 1 : ";
    cin>>num1;
    if(num1>num2){
        int swap = num1;
        swap = num2;
        num2 = num1;
    }
    for(int i = 1;i<=num2;i++){
        if(num1%i==0 && num2%i==0){
            gcd = i;
        }
    }
    cout<<"The GCD is = "<<gcd;
    cout<<"\nDone By Sanjay Rajan R";
}   
