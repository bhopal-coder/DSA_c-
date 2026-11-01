#include <iostream>
using namespace std;
int main()
{
   int a1[]={6,18,20,25,30,50};
   int n1=sizeof(a1)/sizeof(a1[0]);
   int a2[]={5,7,12,31,60};
   int n2=sizeof(a2)/sizeof(a2[0]);
   int a[]={};
   int n=sizeof(a)/sizeof(a[0]);
   int i=0;
   int j=0;
   for(int k=0;k<n;k++)
   {
    if(i<n1 && (j>=n2 || a1[i]<a2[j]))
    {
        a[k]=a1[i];
        i++;
    }
    else
    {
        a[k]=a2[j];
        j++;
    }
    cout<<a[k]<<" ";
   }
   return 0;
}