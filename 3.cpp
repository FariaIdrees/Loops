#include <iostream>
using namespace std;
void sumofdigits()
{
    int num;
    int sum=0;
    do{
        cout<<"enter the number (negative numner to stop)"<<endl;
        cin>>num;
    if (num>=0)
    {
        sum+=num;
    }
    }while (num>=0);
    cout<<"sum of all positive digits:"<<sum<<endl;
    
}
int main() 
{
sumofdigits();
return 0;
}