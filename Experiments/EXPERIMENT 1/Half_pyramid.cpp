#include <iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter The size of the pyramid: ";
    cin>>x;
    for(int i = 1;i<=x;i++){
        for(int j = 1;j<=i;j++){
            cout<<'*';
        }
      cout<<"\n";  
    }
}
