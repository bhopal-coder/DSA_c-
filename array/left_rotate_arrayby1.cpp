#include <iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int n=5;
    int temp=a[0];
    for(int i=0;i<n;i++)
    {
      a[i]=a[i+1];
    }
    a[n-1]=temp;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}