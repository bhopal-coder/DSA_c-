#include <iostream>
using namespace std;
int main()
{
    int n=4;
    int ind=0;
    int a[10]={};
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            a[ind]=i;
            ind++;
        }
    }
    int sum=0;
    for(int i=0;i<ind;i++)
    {
        sum=sum+a[i]; 
    }
    if(sum==n)
    {
        cout<<"Perfect No.";
    }
    else
    {
        cout<<"Non-perfect no.";
    }
    return 0;
}