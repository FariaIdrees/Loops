#include <iostream>
using namespace std;
int perfectnumber(int j)
{
    int sum=0;
    for(int i=1;i<=j/2;i++)
    {
        if(j%i==0)
        {
            sum+=i;
        }
    }
    if (sum==j)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int j;
    cout<<"Enter a number:"<<endl;
    cin>>j;
    if(perfectnumber(j))
    {
        cout<< j <<" is a perfect number."<<endl;
    }
    else{
        cout<< j <<" is not a perfect number. "<<endl;
    }
    return 0;
}
