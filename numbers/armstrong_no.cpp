#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n=153;
    int original=n;
    int ind=0;
    int a[10]={};
    while(n>0)
    {
        int rem=n%10;
        a[ind]=rem;
        ind++;
        n=n/10;   
    }
    int sum=0;
    for(int i=0;i<ind;i++)
    {
        sum=sum+round(pow(a[i],ind));   
    }
    if(sum==original)
    {
        cout<<"Armstrong No.";
    }
    else
    {
        cout<<"Non-armstrong no.";
    }
    return 0;
}