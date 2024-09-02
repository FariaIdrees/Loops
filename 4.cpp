#include <iostream>
using namespace std;
void printnumbers(int a)
{
for (int i = 1; i <=a; i++)
{
    for(int j=1;j<=i;j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}

}
int main()
{
    int a;
    cout<<"Enter the number of rows:"<<endl;
    cin>>a;
    printnumbers(a);
    return 0;
}