#include <iostream>
using namespace std;
int main()
{
    int number;
    int sum=0;
    do
    {
        cout<<"enter the number (enter negative num to stop)"<<endl;
        cin>>number;
        if (number>=0)
        {
            sum+=number;
        }
        
    } while (number>=0);
    cout<<"the sum of all numbers:"<<sum<<endl;
    return 0;
}