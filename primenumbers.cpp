#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;
    int n=2;
    while (n<=a)
    {
        int primenum=1;
        int b=2;
        while (b*b<=n)
        {
            if (n %b==0)
            {
                primenum=0;
                break;
            }
            b++;
        }
        if (primenum)
        {
         cout<<n<<"  ";
        }
        
        n++;
    }
    cout<<endl;
    return 0;
}