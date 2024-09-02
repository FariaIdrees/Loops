#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    int Reversenum=0;
    int originalnum=a;
    while(a>0)
    {
        int value=a % 10;
        Reversenum=Reversenum*10+value;
        a /=10;
    }
    cout<<"Reverse number is :"<<Reversenum<<endl;
    return 0;
}