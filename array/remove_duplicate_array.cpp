#include <iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,2};
    int final[10]={};
    int arr[10]={};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
              int temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
            }
        }
    }
    int index=0;
    for(int k=0;k<n;k++)
    {
      if(k==n-1||(a[k+1]!=a[k]))
      {
         final[index]=a[k];
         index++;
      }
    }
    for(int i=0;i<index;i++)
    {
        cout<<final[i]<<" ";
    }
    return 0;
}
