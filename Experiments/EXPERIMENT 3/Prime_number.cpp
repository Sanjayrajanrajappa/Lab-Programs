
#include <iostream> 
using namespace std; 
int main() 
{ 
    int i, n; 
    bool is_prime = true; 
    cout<<"Enter a positive integer: "; 
    cin>>n; 
    if (n == 0 || n == 1) { 
        is_prime = false; 
    } 
    for (i = 2; i <= n/2; ++i) { 
        if (n % i == 0) { 
            is_prime = false; 
            break; 
        } 
    }
    if (is_prime){
        cout<<"The number "<<n<<" is a prime number"; 
    }
    else{
        cout<<"The number "<<n<< " is not a prime number"; 
    } 
    cout<<"\nDone By SANJAY RAJAN R CSE D";
    cout<<"\nREG NO. 23CS210";
    return 0;    
}
