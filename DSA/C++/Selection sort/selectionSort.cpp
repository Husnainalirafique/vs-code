#include<iostream>
 
using namespace std;
 
int main()
{
    int i,j,loc,temp,min;
    int a[30];
    for(i=0;i<5;i++)
    {
        cout<<"Enter the elements = ";
        cin>>a[i];
    }
 
    for(i=0;i<5-1;i++)
    {
        min=a[i];
        loc=i;
        for(j=i+1;j<5;j++)
        {
            if(min>a[j])
            {
                min=a[j];
                loc=j;
            }
        }
 
        temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
 
    cout<<"Sorted List = ";
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
 
    return 0;
}