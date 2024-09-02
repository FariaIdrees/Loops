#include<iostream>
using namespace std;
int secondlargest(int a[],int size)
{
int larger=a[0];
int secondlarger=a[0];
for(int i=0;i<size;i++)
{
    if (a[i]>larger)
    {
        secondlarger=larger;
         larger=a[i];
    }
    else if (a[i]>secondlarger && a[i]!=larger)
    {
        secondlarger=a[i];
    }
    
}
if (secondlarger==larger)
{
    cout<<"No second larger element exist"<<endl;
    return -1;
}
return secondlarger;

}
int main()
{
    int a[]={4,99,8,74,145,18,230};
    int size=sizeof (a)/sizeof (a[0]);
    int secondlarger=secondlargest(a,size);
    if(secondlarger!=-1)
    {
        cout<<"the second larger number is:"<<secondlarger<<endl;
    }
    return 0;
} 
